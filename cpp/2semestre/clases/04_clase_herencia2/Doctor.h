#include "Empleado.h"
#include <iostream>
class Doctor: public Empleado
{
private:
    /* data */
protected:
std::string licensesNumber;

public:
    Doctor(std::string n, int p, std::string a, std::string b, int idE, double sal, std::string pos, std::string lice): Empleado(n,p,a,b,idE, sal,pos), licensesNumber(lice) 
    {}
    Doctor();
};

