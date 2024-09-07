#include "Curitas.h"
Curitas::Curitas()
{
    precio=0;
    unidadesPaquete=0;
    tipoDisenio="";
    marca="";
    tipoCurita="";
}

Curitas::Curitas(double precio_user, int unidadesPaquete_user, std::string tipoDisenio_user, std::string marca_user, std::string tipoCurita_user)
{
    
    precio=precio_user;
    unidadesPaquete= unidadesPaquete_user;
    tipoDisenio= tipoDisenio_user;
    marca= marca_user;
    tipoCurita= tipoCurita_user;
}

    double      Curitas::get_precio(){return precio;};
    int         Curitas::get_unidadesPaquete(){return unidadesPaquete;};
    std::string Curitas::get_tipoDisenio(){return tipoDisenio;};
    std::string Curitas::get_marca(){return marca;};
    std::string Curitas::get_tipoCurita(){return tipoCurita;};

    void        Curitas::set_precio(double precio_user){ precio = precio_user;};

    
    
    std::string Curitas::get_ID(){ return "3";};  