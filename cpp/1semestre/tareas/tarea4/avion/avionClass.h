#include <iostream>


class avionClass
{
private:
  std::string nombre_pasajero  ;
  std::string nombre_aerolinea ;
  std::string nombre_aeropuerto;
  std::string numero_ticket    ;
  std::string numero_vuelo     ; 
  std::string numero_asiento   ;
  double distanciaTotal;
  int dia              ;
  int mes              ;
  int anio;
  double tua;
  double iva;
  double fuel_coast;
  double airport_Service_coast;
  double tarifa_base;
  double laborCoast;
  double airFleet;
  double total_fare;




public:


  //metodos
  double tarifaBase();

  //setters
  void set_nombre_pasajero  (std::string valor);
  void set_nombre_aerolinea (std::string valor);
  void set_nombre_aeropuerto(std::string valor);
  void set_numero_ticket    (std::string valor);
  void set_numero_vuelo     (std::string valor); 
  void set_numero_asiento   (std::string valor);
  void set_distanciaTotal   (double valor);
  void set_dia              (int valor);
  void set_mes              (int valor);
  void set_anio             (int valor);

  //getters
 
  double getTua();
  double getIva();
  double getFuelCost();
  double getAirportServices();
  double getLaborCoast();
  double getAirFleet();
  double getTotalFare();
  std::string get_nombre_pasajero  ();
  std::string get_nombre_aerolinea ();
  std::string get_nombre_aeropuerto();
  std::string get_numero_ticket    ();
  std::string get_numero_vuelo     (); 
  std::string get_numero_asiento   ();
  double      get_distanciaTotal   ();
  int         get_dia              ();
  int         get_mes              ();
  int         get_anio             ();
  




    


};

