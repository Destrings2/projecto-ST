/*
 * fichero: estructura02
 *
 * compilar: $ g++ -o estructura02 estructura02.cpp
 * ejecutar: $ ./estructura02
 *
 * proposito: Mostrar estructuras 
 */
#include <iostream>

using namespace std;

struct Empleado {
  char nombre[30];
  char id[30];
  int tipoID;
};

struct Empleado2 {
  char *nombre;
  char *id;
  int tipoID;
};

int
main() {

  struct Empleado emp1a = { "Juan", "XXXX", 1 };
  Empleado emp1b = { "Diego", "XXXX", 1 };
  Empleado2 emp2a = { "Alejandro", "XXXX", 1 };
  Empleado* pEmp;
  Empleado2* pEmp2;

  pEmp2= &emp2a;
  pEmp2->tipoID = 2;
  
  cout << pEmp2->nombre << " " << pEmp2->tipoID << endl;

  pEmp2->nombre[0] = 'a';
  cout << pEmp2->nombre << " " << pEmp2->tipoID << endl;

  return 0;
}
// filename: estructura02.cpp
