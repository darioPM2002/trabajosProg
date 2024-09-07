#include <iostream>
#include "Figura.h"
#pragma once
class GeoFigura2d: public Figura
{
private:
   double base;
   double altura;
   
public:
    GeoFigura2d(/* args */);
    GeoFigura2d(double b, double a, std::string n, int l): Figura(n, l), base(b), altura(a)
    {}
};


