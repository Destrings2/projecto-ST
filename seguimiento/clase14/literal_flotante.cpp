
/* Ejemplo literal_flotante.cpp
 *
 * compilacion: $ g++ -o literal_flotante literal_flotante.cpp
 * ejecutar: $ ./literal_flotante
 * Proposito: literales flotantes;
 */

#include <iostream>

// Zona de declaracion de variables globales

int
main() {
  std::cout << "Double: " << 1.23 << std::endl
	    << "Double: " << 0.23 << std::endl
	    << "Double: " << .23 << std::endl
	    << "Double: " << 1. << std::endl
            << "Double: " << 1.0 << std::endl
	    << "Double: " << 1.2e10 << std::endl
	    << "Double: " << 1.23e-15  << std::endl;

  std::cout << "Float: " << 1.23f  << std::endl
	    << "Float: " << 0.23F  << std::endl
	    << "Float: " << .23f << std::endl
	    << "Float: " << 1.f << std::endl
            << "Float: " << 1.0F << std::endl
	    << "Float: " << 1.2e10f << std::endl
	    << "Float: " << 1.23e-15F  << std::endl;

    std::cout << "Long Double: " << 1.23f  << std::endl
	      << "Long Double: " << 0.23F  << std::endl
	      << "Long Double: " << .23f << std::endl
	      << "Long Double: " << 1.f << std::endl
	      << "Long Double: " << 1.0F << std::endl
	      << "Long Double: " << 1.2e10f << std::endl
	      << "Long Double: " << 1.23e-15F  << std::endl;

  return 0;
}
