#include <iostream>

#pragma once
class Cliente
{
private:
double      cantidadGastada;
std::string nombre;
    
public:
    Cliente();
    Cliente(std::string nombre_user);
    
    double      get_cantidadGastada();
    std::string get_nombre();

    void      set_cantidadGastada(double cantidadGastada_user);
    

};

