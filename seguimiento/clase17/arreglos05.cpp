
/*
 * fichero: arreglos05.cpp
 *
 * compilar: $ g++ -o arreglos05 arreglos05.cpp
 * ejecutar: $ ./arreglos05
 *
 * proposito: mostrar como se inicializan arreglos de
 *            de caracteres.
 */
#include <iostream>

using namespace std;

int
main(void) {
  char a4[] = {'a', 'b', '\0', 'c', 'd'};

  cout << a4 << endl;

  for (int i = 0; i < sizeof(a4) / sizeof(char); i++) {
    cout << "a4[" << i << "]=" << a4[i] << endl;
  }


  return 0;
}
