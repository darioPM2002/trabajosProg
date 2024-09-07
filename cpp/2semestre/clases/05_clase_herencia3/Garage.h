
#include "Car.h"
#pragma once
class Garage
{
protected:
Car * listaCars;
int cont;
    /* data */
public:
    Garage(int size);
    Garage();
    ~Garage();         
    void setCar( int pos, Car & c);
};

