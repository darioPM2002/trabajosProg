#include "Circulo.h"

Circulo::Circulo()
{
    radio = 0.0;
    circunferencia = 0.0;
}
double Circulo::getArea(){
    double resultado =3.1416 *radio*radio ;
    std::cout <<"Resultado" << resultado<< std::endl;
    return 3.1416 *radio*radio;
}