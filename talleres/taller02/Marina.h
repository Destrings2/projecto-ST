#pragma once

#include <vector>
#include "Barcos.h"

using std::vector;

class Armada
{
    vector<Barco> barcos;
public:
    vector<Barco> &obtenerBarcos();

    virtual void registrarBarco(Barco &barco) = 0;
};

class ArmadaMarina : public Armada
{

public:
    void registrarBarco(Barco &barco);
};

class ArmadaFluvial : public Armada
{

public:
    void registrarBarco(Barco &barco);
};