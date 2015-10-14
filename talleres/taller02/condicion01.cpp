#include <iostream>

using namespace std;

int main() {
  int c;
  cout << (((cin >> c) and c == 0) ? "El usuario digito un valor de cero" : "El usuario digito un valor diferente de cero") << endl;
  return 0;
}
