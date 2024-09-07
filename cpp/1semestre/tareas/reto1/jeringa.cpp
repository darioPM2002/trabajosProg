#include "jeringa.h"

jeringa::jeringa(/* args */)
{
precio=20.00;
capacidad=5.0;
tamanio=22.0;
marca="Templax";
material_fabricacion="Plastico";

}

jeringa::jeringa(double precio_user, double capacidad_user, double tamanio_user, std::string marca_user, std::string material_fabricacion_user)
{
precio= precio_user;
capacidad= capacidad_user;
tamanio= tamanio_user;
marca=marca_user;
material_fabricacion= material_fabricacion_user;
}

double jeringa::get_precio(){return precio;};
double jeringa::get_capacidad(){return capacidad;};
double jeringa::get_tamanio(){return tamanio;}; 
std::string jeringa::get_marca(){return marca;};
std::string jeringa::get_material_fabricacion(){return material_fabricacion;};

void jeringa::set_precio(double precio_user){precio= precio_user;};


std::string jeringa::get_ID(){ return "5";};   