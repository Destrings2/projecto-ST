#pragma once

class IEnergia
{
public:
    virtual void consumir(float nivel) = 0;
    virtual void cargar(float nivel) = 0;
};

class IPrender
{
public:
    virtual void prender() = 0;
};
class IApagar
{
public:
    virtual void apagar() = 0;
};
