
/*
 * fichero: string01.cpp
 *
 * compilar: $ g++ -o string01 string01.cpp
 * ejecutar: $ ./string01
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s("Hello World");
  cout << s << endl;
  cout << s.size() << endl;

  return 0;
}
