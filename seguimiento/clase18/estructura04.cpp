
/*
 * fichero: estructura04
 *
 * compilar: $ g++ -o estructura04 estructura04.cpp
 * ejecutar: $ ./Estructura04
 *
 * proposito: Mostrar estructuras 
 */
#include <iostream>
#include <cstring>

using namespace std;

struct Empleado2 {
  char *nombre;
  char *id;
  int tipoID;
};

int
main() {

  Empleado2 emp2a;
  Empleado2* pEmp2;

  emp2a.nombre = new char "Alejandro";
  emp2a.id = new char[::strlen("XXXX")+1];
  strcpy(emp2a.nombre, "Alejandro");
  strcpy(emp2a.id, "XXXX");
  
  pEmp2= &emp2a;
  pEmp2->tipoID = 2;
  cout << pEmp2->nombre << " " << pEmp2->tipoID << endl;

  pEmp2->nombre[0] = 'a';
  cout << pEmp2->nombre << " " << pEmp2->tipoID << endl;

  // Siempre recupere la memoria generada por un new
  delete [] pEmp2->nombre;
  delete [] pEmp2->id;
  
  return 0;
}
