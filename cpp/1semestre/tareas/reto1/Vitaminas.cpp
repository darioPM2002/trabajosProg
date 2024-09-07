#include "Vitaminas.h"
Vitaminas::Vitaminas()
{
precio=0.0;
pildorasTotales=0;
tipoVitaminas="";
sabor="";
marca="";

}

Vitaminas::Vitaminas(double precio_user, int pildorasTotales_user, std::string tipoVitaminas_user, std::string sabor_user, std::string marca_user)
{
precio=precio_user;
pildorasTotales=pildorasTotales_user;
tipoVitaminas=tipoVitaminas_user;
sabor=sabor_user;
marca=marca_user;
}

double      Vitaminas::get_precio(){return precio;};
int         Vitaminas::get_pildorasTotales(){return pildorasTotales;};
std::string Vitaminas::get_tipoVitaminas(){return tipoVitaminas;};
std::string Vitaminas::get_sabor(){return sabor;};
std::string Vitaminas::get_marca(){return marca;};

void        Vitaminas::set_precio(double precio_user){precio = precio_user;};
std::string Vitaminas::get_ID(){ return "10";};  
