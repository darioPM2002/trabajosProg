#include <iostream>
#include "Cliente.h"
class superMercado
{
private:
    Cliente* clientes;
    int    numeroClientes;
    int    contadorClientes; 
    double cantidadGastoTotal;

    double frutasGastoTotal;
    double verdurasGastoTotal;
    double carnesGastoTotal;
    double vinosGastoTotal;
    double dulceriaGastoTotal;
    
public:
    superMercado(/* args */);
    superMercado(int numeroClientes_user);
    void calculo_frutasGastoTotal  (std::string nombre_user, double cantidadGastar_user);
    void calculo_verdurasGastoTotal(std::string nombre_user, double cantidadGastar_user);
    void calculo_carnesGastoTotal  (std::string nombre_user, double cantidadGastar_user);
    void calculo_vinosGastoTotal   (std::string nombre_user, double cantidadGastar_user);
    void calculo_dulceriaGastoTotal(std::string nombre_user, double cantidadGastar_user);

    void calcularGastoTotal();
    void agregarCliente(Cliente cliente_user);
};
