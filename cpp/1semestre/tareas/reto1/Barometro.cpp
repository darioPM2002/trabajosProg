#include "Barometro.h"

Barometro::Barometro()
{
precio =0;
longitud=0;
marca="";
color="";
tamanioBrazo="";
}

Barometro::Barometro(double precio_user, double longitud_user, std::string marca_user, std::string color_user, std::string tamanioBrazo_user)
{
precio =precio_user;
longitud=longitud_user;
marca=marca_user;
color=color_user;
tamanioBrazo=tamanioBrazo_user;
}


    double      Barometro::get_precio(){return precio;};
    double      Barometro::get_longitud(){return longitud;};
    std::string Barometro::get_marca(){return marca;};
    std::string Barometro::get_color(){return color;};
    std::string Barometro::get_tamanioBrazo(){return tamanioBrazo;};

    void Barometro::set_precio(double precio_user){precio = precio_user;};
    
 
    std::string Barometro::get_ID(){ return "1";};   