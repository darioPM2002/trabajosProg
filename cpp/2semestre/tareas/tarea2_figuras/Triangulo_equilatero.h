#pragma once
#include "Triangulo.h"

class Triangulo_equilatero: public Triangulo
{
private:
    /* data */
public:
    Triangulo_equilatero(double b, double a, std::string n, int l): Triangulo(b,a,n,l){};
    Triangulo_equilatero();
};

