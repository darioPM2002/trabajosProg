#include "Personaje.h"
#include <iostream>
#pragma once

class Mago: public Personaje
{
private:
    /* data */
public:
    Mago(): Personaje(){};
    Mago(int nV): Personaje(nV){};
    void atacar(Personaje &p);
};
