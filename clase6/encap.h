#include <iostream>
#include <string>

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
