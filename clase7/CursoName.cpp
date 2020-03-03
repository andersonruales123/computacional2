#include <iostream>
#include <string>
#include "Cursoname.h"
using namespace std;

//class definition

LibroCalificar::LibroCalificar(string name)
  {
    setCourseName(name);
  }
void LibroCalificar::setCourseName(string name)
  {
    if(name.length()<=25)
      CourseName=name;
    if(name.length()>25)
      {
	CourseName=name.substr(0,25);
	cout<<"Nombre"<<name<<"excede la longitud de 25 letras"<<endl;
      }
      
  }

void LibroCalificar:: determinarPromedioClase()
  {
    int total;
    int contadorCalif;
    int calificacion;
    int promedio;

    total=0;
    contadorCalif=1;

    while(contadorCalif<=10)
      {
	cout<<"Escriba una calificacion=";
	cin>>calificacion;
	total=total+calificacion;
	contadorCalif=contadorCalif+1;
      }

    promedio=total/10;
    cout<<"\EL total de las 10 calificaciones es="<<total<<endl;
    cout<<"\el promedio de las calificaciones es="<<promedio<<endl;
  }

string LibroCalificar::getCourseName()
  {
    return CourseName;
  }

void LibroCalificar::displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones del curso es "<<getCourseName()<< endl;
   }

