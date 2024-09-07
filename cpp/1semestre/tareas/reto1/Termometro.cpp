#include "Termometro.h"
Termometro::Termometro()
{
precio=0;
isDigital=true;
marca="";
material="";
color="";
}

Termometro::Termometro(double precio_user, bool isDigital_user, std::string marca_user, std::string material_user,std::string color_user)
{
precio= precio_user;
isDigital=isDigital_user;
marca=marca_user;
material=material_user;
color=color_user;
}


double      Termometro::get_precio(){return precio;};
bool        Termometro::get_isDigital(){return isDigital;};
std::string Termometro::get_marca(){return marca;};
std::string Termometro::get_material(){return material;};
std::string Termometro::get_color(){return color;};

void Termometro::set_precio(double precio_user){ precio= precio_user;};
std::string Termometro::get_ID(){ return "8";};  