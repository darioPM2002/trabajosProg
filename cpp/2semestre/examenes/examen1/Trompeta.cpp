#include "Trompeta.h"

Trompeta::Trompeta()
{
    longitud =0;
}

void Trompeta::printInfo()
{
    std::cout << "Info clse Trompeta, info: " << std::endl;
    std::cout <<  costo<<" pesos" << std::endl;
    std::cout << "El material de la embocadura es: " << std::endl;
    std::cout << materialEmb << std::endl;
    std::cout << "Numero de valvulas: " << std::endl;
    std::cout << nValvulas<<" valvulas" << std::endl;
    std::cout << "Longitud de la tuberia: " << std::endl;
    std::cout << longitud << " cm"<< std::endl;
}
