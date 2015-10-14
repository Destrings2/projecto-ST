#pragma once
#include "Interfaces.h"

class Lampara : public IEnergia, public IPrender, public IApagar
{
    bool prendida;
public:
    float nivel;

    float obtNivelEnergia();

    bool estaPrendida();

    void consumir(float nivel);

    void cargar(float nivel);

    void prender();

    void apagar();
};