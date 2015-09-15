
/*
 * fichero: arreglos03.cpp
 *
 * compilar: $ g++ -o arreglos03 arreglos03.cpp
 * ejecutar: $ ./arreglos03
 *
 * proposito: mostrar como se inicializan los arreglos de 
 *            cadenas de caracteres.
 */
#include <iostream>

using namespace std;

int
main(void) {

  int i = 0xCAFEBEEF;
  char a3[] = { 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p' };
  char a4[] = { 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p' };
 
  cout << a4 << endl;

  return 0;
}
