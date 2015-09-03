
// Ejemplo tamanostipos.cpp
//
// Compilar: $ g++ -o tamanostipos tamanostipos.cpp
// Ejecutar: $ ./tamanostipos
//
// Proposito: muestra los tipos b&aacute;sicos de C++ y sus tama&ntilde;os y 
// modificadores.

#include <iostream>

int main() {

  std::cout << "sizeof(int) = "
	    << sizeof(int) << std::endl;
  std::cout << "sizeof(bool) = "
	    << sizeof(bool) << std::endl;
  std::cout << "sizeof(char) = "
	    << sizeof(char) << std::endl;
  std::cout << "sizeof(float) = "
	    << sizeof(float) << std::endl;
  std::cout << "sizeof(double) = "
	    << sizeof(double) << std::endl;
  std::cout << "sizeof(short int) = "
	    << sizeof(short int) << std::endl;
  std::cout << "sizeof(long int) = "
	    << sizeof(long int) << std::endl;
  std::cout << "sizeof(long long) = "
	    << sizeof(long long) << std::endl;
  std::cout << "sizeof(long double) = "
	    << sizeof(long double) << std::endl;
  std::cout << "sizeof(short) = "
	    << sizeof(short) << std::endl;
  std::cout << "sizeof(long) = "
	    << sizeof(long) << std::endl;
  return 0;
}
