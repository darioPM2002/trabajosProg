#include "GeoFigura2d.h"
#pragma once
class Triangulo: public GeoFigura2d
{
private:
    double base;
    double altura;
public:
    Triangulo();
    Triangulo(double b, double a, std::string n, int l): GeoFigura2d(b,a,n,l), base(b), altura(a){};

};
