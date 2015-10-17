#include <iostream>
#include "funcionesCadena.h"

char *saltarblancosinicio(char *s){
    while(*s != 32)
        ++s;
    *s = '\0';
    return s;
}

const char *indiceAlaDerecha(const char *s, int c){
    while(*s != 0)
        if(*s == c)
            return s;
        else
            ++s;
    return '\0';
}
