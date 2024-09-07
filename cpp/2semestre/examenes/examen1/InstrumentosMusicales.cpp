#include "InstrumentosMusicales.h"

InstrumentosMusicales::InstrumentosMusicales()
{
    costo = 0;

}


InstrumentosMusicales::InstrumentosMusicales(double c)
{
    costo =c;
}

void InstrumentosMusicales::printInfo()
{
    std::cout << "Info clse Instrumentos Musicales, info: " << std::endl;
    std::cout <<  costo<<" pesos" << std::endl;
}