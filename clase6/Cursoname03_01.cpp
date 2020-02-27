#include <iostream>
#include <string>
//#include "Cursoname.h"
using namespace std;

//class definition
class LibroCalificar
{
public:
  LibroCalificar(string name)
  {
    setCourseName(name);
  }
  void setCourseName(string name)
  {
    courseName=name;
  }

  string getCourseName()
  {
    return courseName;
  }
  
  void displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones del curso es "<<getCourseName()<< endl;
   }

private:
  string courseName;
};   

// función principal comienza la ejecución del programa
int main()
{
  /*string nameOfcourse;
  LibroCalificar myLibroCalificar;
  cout<<"ingrese el nombre del curso"<<endl;
  //cin>>nameOfcourse;
  getline(cin,nameOfcourse); //NOmbre del curso con espacios
  myLibroCalificar.setCourseName(nameOfcourse);
  myLibroCalificar.displayMessage();*/

  LibroCalificar gradebook1("c++");
  LibroCalificar gradebook2("python");

  cout<<gradebook1.getCourseName()<<endl;
  

  return 0; 
} 


