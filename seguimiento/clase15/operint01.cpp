
/*
 * fichero: operint01.cpp
 * compilar: $ g++ -o operint01 operint01.cpp
 * ejecutar: $ ./operint01
 * proposito: Ejemplo de uso de operadores enteros.
 *            Leer valores enteros.
 */
#include <iostream>

using namespace std;

void operint(int a, int b);
void operdouble(double a, double b);
void operchar(char a, char b);
void operbool(bool a, bool b);

int
main(void) {
  int i1, i2;
  double d1, d2;
  char c1, c2;
  bool b1, b2;

  cout << "Leer dos enteros separados por espacios: " << endl;
  cin >> i1 >> i2;
  operint(i1, i2);

  cout << "Leer dos doubles separados por espacios: " << endl;
  cin >> d1 >> d2;
  operdouble(d1, d2);

  cout << "Leer dos caracteres separados por espacios: " << endl;
  cin >> c1 >> c2;
  operchar(c1, c2);

  cout << "Leer dos valores booleanos separados por espacios: " << endl;
  cin >> b1 >> b2;
  operbool(b1, b2);

  return 0;
}

void operint(int a, int b) {
  int r;
  
  cout << "a: " << a << " b: " << b << endl;
  r = a + b;
  cout << " su suma es: " << r << endl;
  
  r = a - b;
  cout << " su resta es: " << r << endl;
  
  r = a * b;
  cout << " su multiplicacion es: " << r << endl;
  
  r = a / b;
  cout << " su division es: " << r << endl;
  
  r = a % b;
  cout << " su modulo es: " << r << endl;

  return;
}

void operdouble(double a, double b) {
  double r;
  
  cout << "a: " << a << " b: " << b << endl;
  r = a + b;
  cout << " su suma es: " << r << endl;
  
  r = a - b;
  cout << " su resta es: " << r << endl;
  
  r = a * b;
  cout << " su multiplicacion es: " << r << endl;
  
  r = a / b;
  cout << " su division es: " << r << endl;
  
  return;
}

void operchar(char a, char b) {
  char r;
  
  cout << "a: " << a << " b: " << b << endl;
  r = a + b;
  cout << " su suma es: " << r << endl;
  
  r = a - b;
  cout << " su resta es: " << r << endl;
  
  r = a * b;
  cout << " su multiplicacion es: " << r << endl;
  
  r = a / b;
  cout << " su division es: " << r << endl;
  
  r = a % b;
  cout << " su modulo es: " << r << endl;
  return;
}

void operbool(bool a, bool b) {
  bool r;
  
  cout << "a: " << a << " b: " << b << endl;
  r = a + b;
  cout << " su suma es: " << r << endl;
  
  r = a - b;
  cout << " su resta es: " << r << endl;
  
  r = a * b;
  cout << " su multiplicacion es: " << r << endl;
  
  r = a / b;
  cout << " su division es: " << r << endl;
  
  r = a % b;
  cout << " su modulo es: " << r << endl;
  return;
}
