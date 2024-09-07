#include "Desodorante.h"


Desodorante::Desodorante()
{
precio=0.0;
contenidoNeto=0.0;
color="";
marca="";
olor="";    
}

Desodorante::Desodorante(double precio_user, double contenidoNeto_user, std::string color_user, std::string marca_user, std::string olor_user)
{
precio=precio_user;
contenidoNeto=contenidoNeto_user;
color=color_user;
marca=marca_user;
olor=olor_user;       
}

double      Desodorante::get_precio(){return precio;};
double      Desodorante::get_contenidoNeto(){return contenidoNeto;};
std::string Desodorante::get_color(){return color;};
std::string Desodorante::get_marca(){return marca;};
std::string Desodorante::get_olor(){return olor;};

void        Desodorante::set_precio(double precio_user){precio= precio_user;};

 
    std::string Desodorante::get_ID(){ return "4";};  