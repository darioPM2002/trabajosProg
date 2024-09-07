#include <iostream>
#include "Cliente.h"

#pragma once

class Asiento
{
private:
    int tAiento; //1S, 2R, 3VIP
    bool reservado;
    int nuAsiento;
    double costo;
    std::string ti;
    Cliente cliente;
    friend class Admin;
    friend class Cine;
public:
    Asiento();
    Asiento(int ti, Cliente c);

    void printInfo();
    void setNumAsiento(int n);

};
