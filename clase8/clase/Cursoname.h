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
  void recibirCalificaciones();

  void MostrarReporteCalificaciones();//mostrar reporte calificaciones
 private:
  string CourseName;
  int acuenta;
  int bcuenta;
  int ccuenta;
  int dcuenta;
  int ecuenta;
  int fcuenta;
};
