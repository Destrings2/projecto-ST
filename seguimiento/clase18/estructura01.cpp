
/*
 * fichero: estructura01
 *
 * compilar: $ g++ -o estructura01 estructura01.cpp
 * ejecutar: $ ./estructura01
 *
 * proposito: Mostrar estructuras 
 */
#include <iostream>

using namespace std;

// Definicion de una estructura basica
struct Empleado {
  char nombre[30]; 
  char id[30];
  int tipoID;
};

// Definicion de otra estructura "similar"
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

  pEmp = &emp1a;
  pEmp->tipoID = 2;
  cout << pEmp->nombre << " " << pEmp->tipoID << endl;

  pEmp = &emp1b;
  
  pEmp->tipoID = 2;
  cout << pEmp->nombre << " " << pEmp->tipoID << endl;

  pEmp = &emp1a;

  pEmp->nombre[0] = 'j';
  cout << pEmp->nombre << " " << pEmp->tipoID << endl;
  cout << "hola";
  return 0;
}
