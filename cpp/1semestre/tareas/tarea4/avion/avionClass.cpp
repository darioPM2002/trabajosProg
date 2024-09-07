#include "avionClass.h"


double avionClass::tarifaBase(){
    
    tarifa_base= distanciaTotal * 8.03;
    return tarifa_base;

} 
double avionClass::getTua(){
    
    tua= tarifa_base * 0.22;
    return tua;

} 

double avionClass::getIva(){
    
    iva= tarifa_base * 0.16;
    return tua;

} 
double avionClass::getFuelCost(){
    
    fuel_coast= tarifa_base * 0.11;
    return fuel_coast;

} 

double avionClass::getAirportServices(){
    
    airport_Service_coast= tarifa_base * 0.046;
    return airport_Service_coast;

} 
double avionClass::getLaborCoast(){
    
    laborCoast= tarifa_base * 0.199;
    return laborCoast;

} 

double avionClass::getAirFleet(){
    
    airFleet= tarifa_base * 0.139;
    return airFleet;

} 

double avionClass::getTotalFare(){
    
    total_fare= tarifa_base +tua+iva+fuel_coast+airport_Service_coast+laborCoast+airFleet;
    return total_fare;

} 

  std::string avionClass::get_nombre_pasajero  (){
    return nombre_pasajero;
  };
  std::string avionClass::get_nombre_aerolinea (){
    return nombre_aerolinea;
  };
  std::string avionClass::get_nombre_aeropuerto(){
    return nombre_aeropuerto;
  };
  std::string avionClass::get_numero_ticket    (){
    return numero_ticket;
  };
  std::string avionClass::get_numero_vuelo     (){
    return numero_vuelo;
  }; 
  std::string avionClass::get_numero_asiento   (){
    return numero_asiento;
  };
  double      avionClass::get_distanciaTotal   (){
    return distanciaTotal;
  };
  int         avionClass::get_dia              (){
    return dia;
  };
  int         avionClass::get_mes              (){
    return mes;
  };
  int         avionClass::get_anio             (){
    return anio;
  };

//setters 

  void avionClass::set_nombre_pasajero  (std::string valor){
    nombre_pasajero=valor;
  };
  void avionClass::set_nombre_aerolinea (std::string valor){
    nombre_aerolinea=valor;
  };
  void avionClass::set_nombre_aeropuerto(std::string valor){
    nombre_aeropuerto=valor;
  };
  void avionClass::set_numero_ticket    (std::string valor){
    numero_ticket=valor;
  };
  void avionClass::set_numero_vuelo     (std::string valor){
    numero_vuelo=valor;
  }; 
  void avionClass::set_numero_asiento   (std::string valor){
    numero_asiento=valor;
  };
  void avionClass::set_distanciaTotal   (double valor)     {
    distanciaTotal=valor;
  };
  void avionClass::set_dia              (int valor)        {
    dia=valor;
  };
  void avionClass::set_mes              (int valor)        {
    mes=valor;
  };
  void avionClass::set_anio             (int valor)        {
    anio=valor;
  };

