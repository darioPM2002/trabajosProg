#include "Cliente.h"

Cliente::Cliente()
{
cantidadGastada =0;
nombre="";
}

Cliente::Cliente(std::string nombre_user)
{
cantidadGastada =0;
nombre=nombre_user;
}


double      Cliente::get_cantidadGastada(){return cantidadGastada;};
std::string Cliente::get_nombre(){return nombre;};

void        Cliente::set_cantidadGastada(double cantidadGastada_user){cantidadGastada =cantidadGastada_user;};