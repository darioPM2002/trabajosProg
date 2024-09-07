#include "factura.h"
int main() {
    Factura factura;
    factura.setEnterpriseName("MI TIENDITA sA");
    factura.setDia(10);
    factura.setMes(11);
    factura.setAnio(2023);
    std::cout << "el nombre de la tienda es" << factura.getEnterpriseName()<< std::endl;

    return 0;
