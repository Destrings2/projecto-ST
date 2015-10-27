#include "parityTest.h"
#include <iostream>

using namespace std;

const int MAXBUFFER = 256;

int
main(void) {
  int n;
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    char buffer[MAXBUFFER];

    cin >> buffer;
    int nEven, nOdd;
    
    Parity resul = parityTest(buffer, nEven, nOdd);

    cout << resul << " " << nEven << " " << nOdd << endl;
  }

  return 0;
}
