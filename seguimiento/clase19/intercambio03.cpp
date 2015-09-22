
/*
 * fichero: intercambio03.cpp
 * compilar: $ g++ -o intercambio03 intercambio03.cpp
 * ejecutar: $ ./intercambio03
 */
#include <iostream>

using namespace std;
void
intercambio(int& x, int& y) {
  int tmp = x;
  x = y;
  y = tmp;
}

int
main() {
  int x = 10;
  int y = 20;
  
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  intercambio(x,y);

  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  return 0;
}
