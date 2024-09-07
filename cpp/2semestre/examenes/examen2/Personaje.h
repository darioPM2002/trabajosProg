#include <iostream>
#pragma once

class Personaje
{
protected:
int * resistencia;
int * vidas;



public:
    Personaje();
    Personaje(int vidas);
    virtual void atacar(Personaje & p);
    void quitarResis(int n);
    int getResistencia();
};
