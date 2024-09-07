#include "GeoFigura2d.h"
#pragma once
class Cuadrado: public GeoFigura2d
{
protected:
double lonLado;
    
public:
    Cuadrado();
    Cuadrado(double b, double a, std::string n, int l):GeoFigura2d(b,a,n,l), lonLado(b){};
  
};
