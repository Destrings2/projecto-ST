#include "arreglo02.h"
#include <iostream>

using namespace std;

void imprimirArreglo(char nombre[], int arreglo[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << nombre << "[" << i << "] = " << arreglo[i] <<  endl;
}

void concatenarArreglos(int dest[], int fuente[], const int n)
{
    for (int i = n; i < n*2; ++i)
        dest[i] = fuente[i-n];
}

int main(void) {
    const int N = 5 ;
    int a1[N * 2];
    int a2[N];

    cout << "Lea 5 elementos del arreglo a1" << endl;
    for (int i = 0; i < N; ++i) {
        cout << "Leyendo valor a1[" << i << "]" << endl;
        cin >> a1[i];
    }

    cout << "Lea 5 elementos del arreglo a2" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "Leyendo valor a2[" << i << "]" << endl;
        cin >> a2[i];
    }

    cout << "Concatenacion de a1 y a2 en a1" << endl;

    concatenarArreglos(a1, a2, N);
    imprimirArreglo("a1", a1, N*2);

    return 0;
}