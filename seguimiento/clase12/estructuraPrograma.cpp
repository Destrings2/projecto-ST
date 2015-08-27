/* Ejemplo c12031e00
 * Proposito: muestra el cuerpo de un programa en C++
 *
 * Este es un comentario de varias lineas.
 */

// Este es un comentario de una sola línea

// Ficheros de encabezados
#include <iostream>
#define RETURN_VAL 120

// Punto de entrada de los programas
// Es una función <tipo> ID(<listaArgumentos>) <cuerpoPrograma>
int
main() {

  #ifdef SALUDO
  std::cout << "Hola mundo" << std::endl;
  #else
  std::cout << "Adios mundo" << std::endl;
  #endif

  return RETURN_VAL;
}
// filename: estructuraPrograma.cpp
