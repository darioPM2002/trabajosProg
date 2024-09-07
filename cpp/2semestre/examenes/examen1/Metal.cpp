#include "Metal.h"

Metal::Metal()
{
    nValvulas = 0;
}

void Metal::printInfo()
{
    std::cout << "Info clse Metal, info: " << std::endl;
    std::cout <<  costo<<" pesos" << std::endl;
    std::cout << "El material de la embocadura es: " << std::endl;
    std::cout << materialEmb << std::endl;
    std::cout << "Numero de valvulas: " << std::endl;
    std::cout << nValvulas<<" valvulas" << std::endl;
}
