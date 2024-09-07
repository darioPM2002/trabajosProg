#include <iostream>
#include "User.h"
#pragma once


class Cliente: public Usuario
{
private:
    int nCliente;
public:
    Cliente(std::string n, int t, std::string c, int nC): Usuario(n,t,c), nCliente(nC){};
    Cliente();
    std::string getNombre();
};
