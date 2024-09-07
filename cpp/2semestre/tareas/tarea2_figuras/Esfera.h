
#pragma once
#include "GeoFigura3d.h"
class Esfera: public GeoFigura3d
{
private:
    double radio;
 
public:
    Esfera(double v, int c, std::string n, int l, double ra): GeoFigura3d(v,c,n,l), radio(ra){};
    Esfera();
};

