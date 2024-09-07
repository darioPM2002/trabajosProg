#include "Panales.h"


Panales::Panales()
{
precio=0;
unidadesPaquete=0;
marca="";
tamanio="";
material="";
}

Panales::Panales(double precio_user, int unidadesPaquete_user, std::string marca_user, std::string tamanio_user, std::string material_user)
{
precio=precio_user;
unidadesPaquete=unidadesPaquete_user;
marca=marca_user;
tamanio=tamanio_user;
material=material_user;
}

double      Panales::get_precio(){return precio;};
int         Panales::get_unidadesPaquete(){return unidadesPaquete;};
std::string Panales::get_marca(){return marca;};
std::string Panales::get_tamanio(){return tamanio;};
std::string Panales::get_material(){return material;};

void Panales::set_precio(double precio_user){ precio=precio_user;};



std::string Panales::get_ID(){ return "6";};   