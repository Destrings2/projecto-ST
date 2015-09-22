
/*
 * fichero: intercambio01.cpp
 * compilar: $ g++ -o intercambio01 intercambio01.cpp
 * ejecutar: $ ./intercambio01
 */
#include <iostream>

using namespace std;

void
intercambio(int x, int y) {
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
