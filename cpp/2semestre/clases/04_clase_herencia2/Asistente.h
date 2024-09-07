#include "Empleado.h"
#include <iostream>
class Asistente: public Empleado
{
private:
    /* data */
protected:
std::string licensesNumber;

public:
    Asistente(std::string n, int p, std::string a, std::string b, int idE, double sal, std::string pos, std::string lice): Empleado(n,p,a,b,idE, sal,pos), licensesNumber(lice) 
    {}
    Asistente();
};

