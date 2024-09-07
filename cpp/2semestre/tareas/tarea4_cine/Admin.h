#include "User.h"
#include <iostream>
#include "Date.h"
#include "Asiento.h"
#include "Cine.h"
#include "Cliente.h"
#pragma once
class Admin
{
private:
    int nEmpleado;
    double sueldo;
    Date fIngreso;
    Asiento ** listAsientos;
    int contAsientos;
    Cine * ci;


public:
    Admin();
    Admin(int nE, double s, Date fI,Cine & cin);
    void reserNum(int num, Cliente c);
    void resertipo(int num, Cliente c);
    void cancelRe(int num);

}; 
