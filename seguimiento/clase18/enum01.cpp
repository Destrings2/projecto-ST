
/*
 * fichero: enum01.C
 *
 * compilar: $ g++ -o enum01 enum01.C
 *           $ make enum01
 * ejecutar: $ ./enum01
 *
 * proposito: Mostrar una enumeracion
 */
#include <iostream>

enum DiaSemana {
  Domingo = 1, Lunes = 2, Martes, Miercoles, Jueves, Viernes, Sabado
};

DiaSemana
to_enum(int i) {
  switch (i % 7) {
  case 1: return Domingo; 
  case 2: return Lunes;
  case 3: return Martes;
  case 4: return Miercoles;
  case 5: return Jueves;
  case 6: return Viernes;
  case 7: return Sabado;
  default: return Domingo;
  }
}

int
main() {

  DiaSemana diaActual = Lunes;
  int tmp;

  std::cout << "Entre un d&iacute;a entre (Domingo=0) a (Sabado=6)" << std::endl;
  std::cin >> tmp;

  diaActual = to_enum(tmp);

  switch(diaActual) {
  case Domingo:
    std::cout << "es Domingo" << std::endl;
    break;

  case Lunes:
    std::cout << "es Lunes" << std::endl;
    break;

  case Martes:
    std::cout << "es Martes" << std::endl;
    break;

  case Miercoles:
    std::cout << "es Miercoles" << std::endl;
    break;

  case Jueves:
    std::cout << "es Jueves" << std::endl;
    break;

  case Viernes:
    std::cout << "es Viernes" << std::endl;
    break;

  case Sabado:
    std::cout << "es Sabado" << std::endl;
    break;

  default:
    std::cout << "incomprensible" << std::endl;
    break;
  }
  return 0;
}
