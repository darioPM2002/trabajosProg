
#pragma once
#include "Metal.h"
#include <iostream>
class Trompeta: public Metal
{
protected:
    int longitud;
public:
    Trompeta(double c, std::string m, int nv, int l): Metal(c,m,nv), longitud(l){};
    Trompeta();
    void printInfo();
};

