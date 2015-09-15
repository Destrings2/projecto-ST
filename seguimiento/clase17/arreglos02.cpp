
/*
 * fichero: arreglos02.cpp
 *
 * compilar: $ g++ -o arreglos02 arreglos02.cpp
 * ejecutar: $ ./arreglos02
 *
 * proposito: mostrar como se inicializan los arreglos.
 */
#include <iostream>

using namespace std;

int
main(void) {
  
  int a1[] = { 1, 2, 3, 4, 5 };
  float a2[] = { 1.1f, 2.2f, 3.3f, 4.4f };

  // Imprimir todos los valores del arreglo a1
  for (int i = 0; i < sizeof(a1) / sizeof(int); i++) {
    cout << "a1[" << i << "]=" << a1[i] << endl;
  }

  // Imprimir todos los valors del arreglo a2
  for (int i = 0; i < sizeof(a2) / sizeof(float); i++) {
    cout << "a2[" << i << "]=" << a2[i] << endl;
  }

  return 0;
}
