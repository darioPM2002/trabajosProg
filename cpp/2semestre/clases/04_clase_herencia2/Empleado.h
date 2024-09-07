#include "Persona.h"
#include <iostream>
#pragma once
class Empleado: public Persona
{
private:
    /* data */

protected:
int id_empleado;
double salario;
std::string position;    
public:
    Empleado(std::string n, int p, std::string a, std::string b, int idE, double sal, std::string pos ): Persona(n,p,a,b), id_empleado(idE), salario(sal), position(pos)
    {};
    Empleado();
};
