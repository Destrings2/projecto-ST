
/* Ejemplo literalentero.cpp
 *
 * Compilar: $ g++ -o literalentero literalentero.cpp
 *
 * Proposito: Literales.
 * Los literales son valores constantes para los
 * diferentes tipos.
 */

#include <iostream>

// Zona de declaracion de variables globales

int
main() {
  // Los literales de enteros.
  // [+|-] (([1..9](0..9)|0)*|0)
  std::cout << 10 << std::endl;
  std::cout << -10 << std::endl;
  // Los literales octales
  // (0(0..7)+|0)
  std::cout << 010 << std::endl;
  std::cout << std::oct << 010 << std::endl;
  // Los literales hexadecimales
  // (0x((0..9)|(('a'..'f')|('A'..'F')))+|0)
  std::cout << 0xCAFE << std::endl;
  std::cout << std::hex << 0xCAFE << std::endl;
  // Los literales char
  char c;
  std::cout << "Leer un caracter" << std::endl;
  std::cin >> c;
  std::cout << c << std::endl;
  c = c >= 'a' and c <= 'z' ? (c - 'a' + 'A') : c;
  std::cout << c << std::endl;
  return 0;
}
