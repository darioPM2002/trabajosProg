#include "GeoFigura2d.h"
#include <iostream>
#pragma once
class Circulo: public GeoFigura2d
{
protected:
 double radio;
 double circunferencia;
public:
    Circulo();
     double getArea();
    Circulo(double b, double a, std::string n, int l, double ra, double cir) : GeoFigura2d(b, a, n, l), radio(ra), circunferencia(cir)
    {}
};

