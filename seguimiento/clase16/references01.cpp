
/*
 * fichero: references01.cpp
 * 
 * compilar: $ g++ -o references01 references01.cpp
 * ejecutar: $ ./references01
 *
 * proposito: Mostrar la inicializaci&oacute;n de referencias
 */
#include <iostream>

// variable global
int a = 10;
float b = 1.1f;

int
main(void) {

  int &ref_a = a;
  float sref_b = b;

  // Incrementa
  ref_a++;
  sref_b++;

  std::cout << "a: " << a
	    << " ref_a: " << ref_a
	    << std::endl;

  std::cout << "b: " << b
	    << " sref_b " << sref_b
	    << std::endl;

  return 0;
}
