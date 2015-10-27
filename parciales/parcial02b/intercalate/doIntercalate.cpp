#include "intercalate.h"
#include <iostream>

using namespace std;

const int MAX_ELEM_ARRAY = 256;
int array1[MAX_ELEM_ARRAY];
int array2[MAX_ELEM_ARRAY];
int
main(void) {
  int times;

  cin >> times;
  for (int i = 0; i < times; ++i) {
    int nbr, fact;
    cin >> nbr >> fact;
    for (int j = 0; j < nbr; ++j) {
      cin >> array1[j];
    }
    for (int j = 0; j < nbr; ++j) {
      cin >> array2[j];
    }
    int *res = intercalate(array1, array2, nbr, fact);
    for (int j = 0; j < (nbr - 1); ++j) {
      cout << res[j] << " ";
    }
    cout << res[nbr - 1] << endl;
  }
}
