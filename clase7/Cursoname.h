#include<string>

using std::string;
class LibroCalificar
{
 public:
  LibroCalificar(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
  void determinarPromedioClase();
 private:
  string CourseName;
};
