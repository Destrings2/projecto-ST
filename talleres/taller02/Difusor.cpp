#include "Difusor.h"

void Difusor::estAnguloDifusion(float anguloDifusion){
    this->anguloDifusion = anguloDifusion;
}
void DifusorCentral::estDifusorCentral(float difusorCentral){
    this->difusorCentral = difusorCentral;
}

void DifusorBivalenteCentral::estDifusorBiC(float difusorBiC){
    this->difusorBiC = difusorBiC;
}

float DifusorBivalente::obtAnguloPost(){
    return anguloPos;
}

float Difusor::obtAnguloDifusion(){
    return anguloDifusion;
}

void DifusorBivalente::estAnguloPost(float angulo){
    anguloPos = angulo;
}

bool DifusorCentral::potenciaDifusion(float potencia){
    return (difusorCentral + obtAnguloDifusion()) == potencia;
}

bool DifusorBivalenteCentral::potenciaDifusion(float potencia){
    return (obtAnguloDifusion() + obtAnguloPost()) == (2*difusorBiC - potencia);
}