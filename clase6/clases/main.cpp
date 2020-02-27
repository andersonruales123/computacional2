#include <iostream>
#include <string>

using namespace std;
#include "Cursoname.h";
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
