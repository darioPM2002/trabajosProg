#include <iostream>
#include "Figura.h"
#pragma once
class GeoFigura3d: public Figura
{
private:
   double volumen;
   int caras;
   
public:
    GeoFigura3d(/* args */);
    GeoFigura3d(double v, int c, std::string n, int l): Figura(n,l), volumen(v), caras(c)
    {}
};


