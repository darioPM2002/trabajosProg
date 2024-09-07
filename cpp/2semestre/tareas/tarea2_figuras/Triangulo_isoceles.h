#pragma once
#include "Triangulo.h"

class Triangulo_isoceles: public Triangulo
{
private:
    /* data */
public:
    Triangulo_isoceles(double b, double a, std::string n, int l): Triangulo(b,a,n,l){};
    Triangulo_isoceles();
};

