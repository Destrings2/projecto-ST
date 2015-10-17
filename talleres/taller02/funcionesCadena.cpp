#include <iostream>
#include "funcionesCadena.h"

char *saltarblancosinicio(char *s){
    while(*s != 32)
        ++s;
    *s = '\0';
    return s;
}

const char *indiceAlaDerecha(const char *s, int c){
    const char *last = nullptr;
    while(*s != 0)
    {
        if(*s == c)
            last = s;
        ++s;
    }
    return last != nullptr ? last : '\0';
}

int main(){
    char s[] = "Test hola";
    std::cout << indiceAlaDerecha(s, 'x');
}
