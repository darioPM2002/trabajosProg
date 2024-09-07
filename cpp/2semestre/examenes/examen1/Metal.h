#pragma once
#include "Viento.h"
#include <iostream>

class Metal: public Viento
{
protected:
    int nValvulas;
public:
    Metal(double c, std::string m, int nv): Viento(c,m), nValvulas(nv){};
    Metal();
    void printInfo();
};

