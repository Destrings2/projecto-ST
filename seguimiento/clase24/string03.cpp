
/*
 * fichero: string03.cpp
 *
 * compilar: $ g++ -o string03 string03.cpp
 * ejecutar: $ ./string03
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;

  s1 = s1 + s2;

  cout << "s1: " << s1 << endl;

  return 0;
}
