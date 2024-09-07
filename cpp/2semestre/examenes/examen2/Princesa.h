#include "Personaje.h"
#include <iostream>
#pragma once

class Princesa: public Personaje
{
private:
    /* data */
public:
    Princesa(): Personaje(){};
    Princesa(int nV): Personaje(nV){};
    void atacar(Personaje &p);
};
