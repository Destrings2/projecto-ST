#include <iostream>

using namespace std;

int
main() {
    int a;
    int b;
    int suma;
    int diff;

    cin >> a;
    cin >> b;

    if ((suma = a + b) | (diff = a - b)){
        cout << "suma: " << suma << " resta: " << diff << endl;
    }
    else {
        cout << "suma: " << suma << " resta: " << diff << endl;
    }

    return 0;
}