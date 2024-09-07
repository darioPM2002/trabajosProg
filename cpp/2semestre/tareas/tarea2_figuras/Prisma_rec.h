
#pragma once
#include "GeoFigura3d.h"
class Prisma: public GeoFigura3d
{
private:
    double lado1;
    double lado2;
    double lado3;
 
public:
    Prisma(double v, int c, std::string n, int l, double la1,double la2,double la3): GeoFigura3d(v,c,n,l), lado1(la1), lado2(la2),lado3(la3){};
    Prisma();
};

