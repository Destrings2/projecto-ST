
/*
 * fichero: arreglos01.cpp
 *
 * compilar: $ g++ -o arreglos01 arreglos01.cpp
 * ejecutar: $ ./arreglos01
 *
 * proposito: mostrar como se crean arreglos de diferentes tamano.
 */
#include <iostream>

using namespace std;

// Constantes para iniciar arreglos
const int TAM_ARREGLO_1 = 10;
const int TAM_ARREGLO_2 = 5;

// Se inicializan en cero
double arreglo1[TAM_ARREGLO_1];

int
main(void) {

  int arreglo2[TAM_ARREGLO_2];

  for (int i = 0; i < TAM_ARREGLO_1; i++) {
    
    cout << "arreglo1[" << i
	 << "] = "  << arreglo1[i] << endl;
     
  }

  for (int i = 0; i < TAM_ARREGLO_2; i++) {
    
    cout << "arreglo2[" << i
	 << "] = "  << arreglo2[i] << endl;
     
  }
  
  return 0;
}
