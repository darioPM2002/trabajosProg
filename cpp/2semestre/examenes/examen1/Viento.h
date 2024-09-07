#pragma once
#include "InstrumentosMusicales.h"
#include <iostream>

class Viento: public InstrumentosMusicales
{
protected:
    std::string materialEmb;
public:
    Viento(double c, std::string m): InstrumentosMusicales(c), materialEmb(m){};
    Viento();
    void printInfo();
    
};

