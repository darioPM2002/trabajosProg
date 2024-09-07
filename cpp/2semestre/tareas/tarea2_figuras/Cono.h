
#pragma once
#include "GeoFigura3d.h"
class Cono: public GeoFigura3d
{
private:
    double radio;
    double altura;
public:
    Cono(double v, int c, std::string n, int l, double ba, double ra, double al): GeoFigura3d(v,c,n,l), altura(al){};
    Cono();
};

