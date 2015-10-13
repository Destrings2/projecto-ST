
/*
 * fichero: string04.cpp
 *
 * compilar: $ g++ -o string04 string04.cpp
 * ejecutar: $ ./string04
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s1;
  string s2;

  getline(cin, s1);
  getline(cin, s2);

  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;

  if (s1 < s2) {
    cout << "s1 es menor que s2" << endl;
  }

  if (s1 != s2) {
    cout << "s1 es diferente de s2" << endl;
  }
  
  return 0;
}
