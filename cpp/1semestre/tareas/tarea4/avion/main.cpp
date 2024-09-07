#include "avionClass.h"


int main()
{
    avionClass avion1;
    avion1.set_nombre_aerolinea("aeromexico");  
    avion1.set_nombre_pasajero("juan perez");
    avion1.set_nombre_aeropuerto("aeropuerto1");
    avion1.set_numero_asiento("132b");
    avion1.set_numero_ticket("12412-b.h");
    avion1.set_numero_vuelo("12432df");
    avion1.set_dia(17);
    avion1.set_mes(06);
    avion1.set_anio(2023);

    avion1.set_distanciaTotal(1000);
    avion1.tarifaBase();
    avion1.getAirFleet();
    avion1.getAirportServices();
    avion1.getFuelCost();
    avion1.getIva();
    avion1.getTua();
    avion1.getLaborCoast();

    double resultado= avion1.getTotalFare();

    std::cout <<"El precio total del boleto es de: "<< resultado  << std::endl;

    return 0;
}
