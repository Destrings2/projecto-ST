
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
  float c;
};

int
main(void) {

  U1 unU1 = { 65 }, dosU1 = { 'a' };

  cout << "Elemento de unUN1 " << unU1.a << endl;

  cout << "Elemento de dosU1 " << dosU1.b << endl;

  cout << "Elemento de unUN1 " << unU1.b << endl;

  cout << "Elemento de dosU1 " << dosU1.a << endl;
  
  return 0;
}

