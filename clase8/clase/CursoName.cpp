#include <iostream>
#include <string>
#include "Cursoname.h"
using namespace std;

//class definition

LibroCalificar::LibroCalificar(string name)
  {
    setCourseName(name);
    acuenta;
    bcuenta;
    ccuenta;
    dcuenta;
    ecuenta;
    fcuenta;
    
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

void LibroCalificar::recibirCalificaciones()
{
  int calificacion;
  cout<<"Escriba la califiacion de la letra"<<endl;
  cout<<"EScriba el caracter EOF para terminar la entrada"<<endl;//control d,ctlez

  while((calificacion=cin.get())!=EOF)
    {
      switch(calificacione)
	{
	  case 'A':
	  case 'a':
	    acuentas++;
	    break;
     	case 'B':
	case 'b':
	  bcuentas++;
	  break;
	case 'C':
	case 'c':
	  ccuentas++;
	  break;
	case 'D':
	case 'd':
	  dcuentas++;
	  break;

	case 'E':
	case 'e':
	  ecuentas++;
	  break;
	case 'F':
	case 'f':
	  dcuentas++;
	  break;

	case '\n':
	case'\t':
	case '':
	  break;

	default:
	  cout<<"NO ingreso ninguna letra"<<endl;
	  break
	}
 
      
      
    }

      
}

void LibroCalificar:: MostrarReporteCalificaciones()
{
  
}
