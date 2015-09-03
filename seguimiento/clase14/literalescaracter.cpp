
/* Ejemplo literalescaracter.cpp
 *
 * compilar: $ g++ -o literalescaracter literalescaracter.cpp
 * ejecutar: $ ./literalescaracter
 * Proposito: Mostrar los literales son caracter.
 */

#include <iostream>

int
main() {
  char c;
  std::cin >> c;
  std::cout << "el valor de '" << c
	    << " es " << int(c) << std::endl;
  return 0;
}
