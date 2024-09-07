#include "Personaje.h"
#include <iostream>
#pragma once

class Heroe: public Personaje
{
private:
    /* data */
public:
    Heroe(): Personaje(){};
    Heroe(int nV): Personaje(nV){};
    void atacar(Personaje &p);
};
