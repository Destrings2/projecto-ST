
/*
 * fichero: operint03.cpp
 * compilar: $ g++ -o operint03 operint03.cpp
 * ejecutar: $ ./operint03
 * proposito: Ejemplo de uso de operadores enteros.
 *            Leer valores enteros.
 */
#include <iostream>

using namespace std;

void operint(int a, int b);

int
main(void) {
  int i1, i2;

  cout << "Leer dos enteros separados por espacios: " << endl;
  cin >> i1 >> i2;
  operint(i1, i2);

  return 0;
}

void operint(int a, int b) {
  int r;
  
  cout << "a: " << a << " b: " << b << endl;
  
  r = a & b;
  cout << " operacion y a nivel de bits: " << r << endl;
  
  r = a | b;
  cout << " operacion o a nivel de bits: " << r << endl;
  
  r = a ^ b;
  cout << " operacion o-exclusivo a nivel de bits " << r << endl;
  
  r = ~a;
  cout << " complemento de a: " << r << endl;
  
  r = a << 1;
  cout << " desplazar a la iquierda: " << r << endl;

  r = a >> 1;
  cout << " desplazar a la derecha: " << r << endl;

  r = a && b;
  cout << " operador y logico: " << r << endl;

  r = a || b;
  cout << " operdor o logico: " << r << endl;
  return;
}
