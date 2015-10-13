
/*
 * fichero: string02.cpp
 *
 * compilar: $ g++ -o string02 string02.cpp
 * ejecutar: $ ./string02
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s("Hello World");

  for (int i = 0; i < s.size(); i++) {
    cout << "s[" << i << "]=" << s[i] << endl;
  }

  s[0] = 'h';
  cout << s << endl;
  return 0;
}
