
/*
 * fichero: arreglos06.cpp
 *
 * compilar: $ g++ -o arreglos06 arreglos06.cpp
 * ejecutar: $ ./arreglos06
 *
 * proposito: mostrar como se inicializan arreglos de
 *            de caracteres.
 */
#include <iostream>

using namespace std;

int
main(void) {
  
  char a5[5] = {'a', 'b', 'c', 'd', 0};

  for (int i = 0; i < sizeof(a5) / sizeof(char); i++) {

    cout << "a5[" << i << "]=" << a5[i] << endl;
  }

  cout << "a5[]=" << a5 << endl;

  cout << "direccion de a5[0]: " << (void *) &a5[0] << endl;
  cout << "direccion de a5:    " << (void *) a5 << endl;
  return 0;
}
