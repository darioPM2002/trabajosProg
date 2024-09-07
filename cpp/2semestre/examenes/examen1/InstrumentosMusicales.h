
#pragma once
#include <iostream>
class InstrumentosMusicales
{
protected:
    double costo; 
public:
    InstrumentosMusicales();
    InstrumentosMusicales(double c);
    virtual void printInfo();
    
};
