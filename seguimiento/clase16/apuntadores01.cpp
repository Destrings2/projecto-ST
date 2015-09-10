
/*
 * fichero: apuntadores01.cpp
 *
 * compilar: $ g++ -o apuntadores01 apuntadores01.cpp
 * ejecutar: $ ./apuntadores01
 *
 * proposito: Mostrar la declaracion y uso de apuntadores
 */
#include <iostream>

using namespace std;

void print(int, int*);

int
main(void) {
  int a = 10;
  int* pA = &a;

  print(a, pA);

  int b = 20;
  int *pB;

  // Esto puede ser peligros si pB no sido inicializado
  pB = &b;
  print(b, pB);

  (*pA)++;
  (*pB)--;

  print(a, pA);
  print(b, pB);

  // Los apuntadores son alias de lo que apunta
  // no de lo que estan nombrados
  int* tmp;
  tmp = pA;
  pA = pB;
  pB = tmp;

  (*pA)++;
  (*pB)--;

  print(a, pA);
  print(b, pB);
  return 0;
}

void
print(int v, int *pV) {

  cout << "valor: " << v
       << " contenido apuntador: " << *pV
       << " apuntador: " << pV << endl;
  return;
}
