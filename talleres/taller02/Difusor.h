#pragma once

class Difusor
{
    float anguloDifusion;
public:
    virtual ~Difusor() = default;
    float obtAnguloDifusion();
    virtual bool potenciaDifusion(float potencia) = 0;
    void estAnguloDifusion(float anguloDifusion);
};

class DifusorCentral : public Difusor
{
    float difusorCentral;
public:
    void estDifusorCentral(float difusorCentral);

    bool potenciaDifusion(float potencia);
};

class DifusorBivalente : public Difusor
{
    float anguloPos;
public:
    void estAnguloPost(float angulo);
    float obtAnguloPost();
};

class DifusorBivalenteCentral : public DifusorBivalente
{
    float difusorBiC;
public:
    void estDifusorBiC(float difusorBiC);

    bool potenciaDifusion(float potencia);
};

