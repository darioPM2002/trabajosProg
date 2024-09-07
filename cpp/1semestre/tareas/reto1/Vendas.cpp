#include "Vendas.h"
Vendas::Vendas(/* args */)
{
    precio=0;
    numero_unidades=0;
    tamanio=0; 
    marca="";
    color="";
}

Vendas::Vendas(double precio_user, int numero_unidades_user, double tamanio_user, std::string marca_user, std::string color_user)
{
    precio=precio_user;
    numero_unidades=numero_unidades_user;
    tamanio=tamanio_user; 
    marca=marca_user;
    color=color_user;
}


    double Vendas::get_precio(){return precio;};
    int    Vendas::get_numero_unidades(){return numero_unidades;};
    double Vendas::get_tamanio(){return tamanio;}; 
    std::string Vendas::get_marca(){return marca;};
    std::string Vendas::get_color(){return color;};

std::string Vendas::get_ID(){ return "9";};  