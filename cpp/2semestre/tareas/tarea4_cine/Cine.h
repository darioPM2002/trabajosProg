#include "Asiento.h"
#pragma once
class Cine
{
private:
    Asiento **listaAsientos;
public:
    Cine(/* args */);
   Asiento** getAsientos();
   void printInfo();
   ~Cine();
};

