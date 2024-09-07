#pragma once
#include "Triangulo.h"

class Triangulo_derecho: public Triangulo
{
private:
    /* data */
public:
    Triangulo_derecho(double b, double a, std::string n, int l): Triangulo(b,a,n,l){};
    Triangulo_derecho();
};

