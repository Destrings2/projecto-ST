#include "Lampara.h"

float Lampara::obtNivelEnergia(){
    return nivel;
}

bool Lampara::estaPrendida(){
    return prendida;
}

void Lampara::consumir(float consumo){
    nivel -= consumo;
}

void Lampara::cargar(float poder){
    nivel += poder;
}

void Lampara::prender(){
    prendida = true;
}

void Lampara::apagar(){
    prendida = false;
}
