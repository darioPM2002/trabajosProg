#include "factura.h"

double Factura::getTotal(){

    //retornamos un atributo

    return total;
}

std::string Factura::getEnterpriseName(){

    return enterpriseName;
}


std::string * Factura::getProducts(){

    return products;
}
int Factura::getFolio(){

    return folio;
}

int Factura::getdia(){

    return dia;
}
int Factura::getmes(){

    return mes;
}
int Factura::getanio(){

    return anio;
}

//setters

void Factura::setEnterpriseName(std::string name){

enterpriseName = name;
}

void Factura::setDia(int a){

dia = a;
}

void Factura::setMes(int a){

mes = a;
}
void Factura::setAnio(int a){

anio = a;
}
