
#pragma once
#include "GeoFigura3d.h"
class Cubo: public GeoFigura3d
{
private:
    double lado;

public:
    Cubo(double v, int c, std::string n, int l, double ba, double la): GeoFigura3d(v,c,n,l), lado(la){};
    Cubo();
};

