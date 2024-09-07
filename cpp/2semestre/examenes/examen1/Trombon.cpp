#include "Trombon.h"

Trombon::Trombon()
{
    longitudVara = 0;
}

void Trombon::printInfo()
{
    std::cout << "Info clse Trombon, info: " << std::endl;
    std::cout <<  costo<<" pesos" << std::endl;
    std::cout << "El material de la embocadura es: " << std::endl;
    std::cout << materialEmb << std::endl;
    std::cout << "Numero de valvulas: " << std::endl;
    std::cout << nValvulas<<" valvulas" << std::endl;
    std::cout << "longitud de la vara: : " << std::endl;
    std::cout << longitudVara<<" cm" << std::endl;


}
