
#pragma once
#include "GeoFigura3d.h"
class Tetraedro: public GeoFigura3d
{
private:
    double base;
    double altura;
public:
    Tetraedro(double v, int c, std::string n, int l, double ba, double al): GeoFigura3d(v,c,n,l), base(ba), altura(al){};
    Tetraedro();
};

