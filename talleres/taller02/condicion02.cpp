#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << (((cin >> a >> b) and a == 0 and b == 0) ?  "Uno de los valores es cero" : "Ambos valores son diferentes de cero") << endl;

    return 0;
}