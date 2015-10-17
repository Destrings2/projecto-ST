#include <iostream>
#include "Marina.h"
#include <typeinfo>

void ArmadaMarina::registrarBarco(Barco *barco){
    IMar *p = dynamic_cast<IMar*>(barco);
    if(p)
    {
        std::cout << "Barco registrado en marina" << std::endl;
        obtenerBarcos().push_back(*barco);
    }
}

void ArmadaFluvial::registrarBarco(Barco *barco){
    if(IRio *p = dynamic_cast<IRio*>(barco))
    {
        std::cout << "Barco registrado en fluvial" << std::endl;
        obtenerBarcos().push_back(*barco);
    }
}

vector<Barco> &Armada::obtenerBarcos(){
        return barcos;
}
