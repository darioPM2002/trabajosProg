#include "Figura.h"

Figura::Figura()
{
nombbre= "no name";
}

Figura::Figura(std::string n, int l)
{   
    lados = l;
    nombbre = n;
}
double Figura::getArea(){
    std::cout <<"Resultado" << std::endl;
    return 0.0;
}