#include <iostream>
#pragma once


class Usuario
{
protected:
    std::string nombre;
    int telefono;
    std::string  correo;
    
public:
    Usuario();
    Usuario(std::string n, int t, std::string c);
    
};

