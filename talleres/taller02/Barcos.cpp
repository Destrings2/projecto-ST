#include "Barcos.h"
#include "Marina.h"

string Barco::obtId(){
    return id;
}

int main()
{
    Barco *a = new Fragata("Fragata");
    Barco *b = new Lancha("Lancha");
    Barco *c = new Portaviones("Portaviones");

    ArmadaFluvial *armadaFluvial = new ArmadaFluvial();
    ArmadaMarina *armadaMarina = new ArmadaMarina();

    armadaFluvial->registrarBarco(*a);
    armadaMarina->registrarBarco(*b);

    return 0;
}