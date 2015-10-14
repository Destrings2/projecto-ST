#include <iostream>
#include <stdlib.h>
#include "funcion2.h"

int mcd(int a, int b){
    if(b == 0)
        return a;

    return mcd(a, a%b);
}

void simpFrac(int &numerador, int &denominador){
    int divisor = mcd(numerador, denominador);
    std::cout << numerador/divisor << "/" << denominador/divisor;
}
