
/*
 * fichero: uniones01.cpp
 *
 * compilar: $ g++ -o uniones01 uniones01.cpp
 * ejecutar: $ ./uniones01
 *
 * proposito: Mostrar como se definen y como se declaran
 *            uniones
 */
#include <iostream>

using namespace std;

union U1 {
  int a;
  char b;
} unU1 = { 'a'} , dosU1 = {34};  // globales

int
main(void) {

  union U2 { unsigned int a;
    signed int b; } unoU2 = { -343 }, dosU2 = {  343 };

  cout << "Elemento de unUN1 " << unU1.b << endl;

  cout << "Elemento de dosU1 " << dosU1.a << endl;

  cout << "Elemento de tresUN1 " << unoU2.a << endl;

  cout << "Elemento de cuatroU1 " << dosU2.b << endl;
  
  return 0;
}

