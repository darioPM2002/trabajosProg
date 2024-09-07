#include "Suero.h"

Suero::Suero(/* args */)
{
    precio=0;
    mililitros=0;
    color=""; 
    marca="";
    sabor="";
}

Suero::Suero(double precio_user, double mililitros_user,  std::string color_user, std::string marca_user, std::string sabor_user)
{
    precio=precio_user;
    mililitros=mililitros_user;
    color=color_user; 
    marca=marca_user;
    sabor=sabor_user;
}

    double      Suero::get_precio(){return precio;};
    double      Suero::get_mililitros(){return mililitros;};
    std::string Suero::get_color() {return color;}; 
    std::string Suero::get_marca() {return marca;};
    std::string Suero::get_sabor() {return sabor;};

    void Suero::set_precio(double precio_user){ precio=precio_user;};


std::string Suero::get_ID(){ return "7";};   