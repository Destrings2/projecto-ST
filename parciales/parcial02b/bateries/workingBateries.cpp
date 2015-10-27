#include "bateries.h"
#include <iostream>

using namespace std;

int
main() {

  int nBateries;

  cin >> nBateries;

  Batery *bateries[nBateries];

  for (int i = 0; i < nBateries; ++i) {
    
    float charge[2];
    cin >> charge[0] >> charge[1];
    bateries[i] = new B2Batery(charge);
  }

  float amount;
  cin >> amount;
  
  while (amount != 0.0) {

    float total = getTotalBateries(bateries, nBateries);
    if (amount <= total) {
      for (int i = 0; i < nBateries; ++i) {
	bateries[i]->setDischarge(amount *
				  bateries[i]->getTotalCharge() / total);
	cout << bateries[i]->getTotalCharge() << " ";
      }
      cout << endl;
    }
    cin >> amount; 
  }

  for (int i = 0; i < nBateries; ++i) {
    cout << i << ": ";
    for (int j = 0; j < 2; ++j) {
      cout << bateries[i]->getCharge(j) << " ";
    }
    cout << endl;
  }
  cout << getTotalBateries(bateries, nBateries);
  return 0;
}
