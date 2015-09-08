
/*
 * fichero: init01.cpp
 * 
 * compilar: $ g++ -o init01 init01.cpp -std=c++11
 * ejecutar: $ ./init01
 * proposito: Mostrar la inicializacion de valores;
 */
#include <iostream>

int
main(void) {

  int a = 20;
  int b { 20 };

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  return 0;
}
