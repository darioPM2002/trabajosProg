#include "CepilloDientes.h"

CepilloDientes::CepilloDientes()
{
    precio =0.0;
    numeroCerdas =0;
    color ="";
    tamanio ="";
    marca ="";
}

CepilloDientes::CepilloDientes(double precio_user, int numeroCerdas_user, std::string color_user, std::string tamanio_user, std::string marca_user)
{
    precio =precio_user;
    numeroCerdas = numeroCerdas_user;
    color = color_user;
    tamanio = tamanio_user;
    marca = marca_user;
}

    double      CepilloDientes::get_precio(){return precio;};
    int         CepilloDientes::get_numeroCerdas(){return numeroCerdas ;};
    std::string CepilloDientes::get_color(){return color ;};
    std::string CepilloDientes::get_tamanio(){return tamanio;};
    std::string CepilloDientes::get_marca(){return marca;};

    void        CepilloDientes::set_precio(double precio_user){ precio=precio_user; };

     
    std::string CepilloDientes::get_ID(){ return "2";};  