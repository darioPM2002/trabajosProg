#include "Viento.h"

Viento::Viento()
{
    materialEmb = "";
}

void Viento::printInfo()
{
    std::cout << "Info clse Viento, info: " << std::endl;
    std::cout <<  costo<<" pesos" << std::endl;
    std::cout << "El material de la embocadura es: " << std::endl;
    std::cout << materialEmb << std::endl;

}
