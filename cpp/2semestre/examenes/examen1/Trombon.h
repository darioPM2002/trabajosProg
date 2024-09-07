#include "Metal.h"
#include <iostream>
#pragma once

class Trombon: public Metal
{
protected:
    int longitudVara;
public:
    Trombon(double c, std::string m, int nv, int lV): Metal(c,m,nv), longitudVara(lV){};
    Trombon();
    void printInfo();
};

