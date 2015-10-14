#pragma once

#include <string>
#include "INaves.h"

using std::string;

class Barco
{
    string id;
public:
    Barco(string id) : id(id){};
    virtual string obtId();
};

class Portaviones : public Barco, public IMar
{
public:
    Portaviones(string id) : Barco(id){}
};

class Fragata : public Barco, public IMar
{
public:
    Fragata(string id) : Barco(id){}
};

class Lancha : public Barco, public IMar, public IRio
{
public:
    Lancha(string id) : Barco(id){}
};