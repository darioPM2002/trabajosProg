#include "Cliente.h"
#include <iostream>
#include "ProductoBase.h"
class Farmacia
{
private:
    //Listas
    ProductoBase* listaDeProductos;
    Cliente* listaClientes;
    //Contadores

    int numero_clietnets;
    int contadorMayores;
    int contadorMenores;
    int contadorHombres;
    int contadorMujeres;
    int contadorUsuarios; 

    int listProductosContador;

    int contadorBarometro  ;
    int contadorCepillo    ;
    int contadorCuritas    ;
    int contadorDesodorante;
    int contadorJeringa    ;    
    int contadorPaniales   ;    
    int contadorSuero      ;
    int contadorTermometro ;
    int contadorVendas     ;
    int contadorVitaminas  ;
    int totalArticulos;


    //totales
    double totalBarometro  ;
    double totalCepillo    ;
    double totalCuritas    ;
    double totalDesodorante;
    double totalJeringa    ;    
    double totalPaniales   ;    
    double totalSuero      ;
    double totalTermometro ;
    double totalVendas     ;
    double totalVitaminas  ;
    double ventasTotales;


    
public:
  
    Farmacia();
    Farmacia(int numero_productos, int numeroClientes);
    
    void agreagarProducto(double precio_user, std::string ID_user);
    void contadorDeProductos();
    void ventaCliente(Cliente user, std::string ID_productoComprado, double precio_user);
    bool verifiicarUsuario(std::string nombre_user);
    void estadisticasProductos();
    //getters contador


    int get_contadorBarometro  ();
    int get_contadorCepillo    ();
    int get_contadorCuritas    ();
    int get_contadorDesodorante();
    int get_contadorJeringa    ();    
    int get_contadorPaniales   ();    
    int get_contadorSuero      ();
    int get_contadorTermometro ();
    int get_contadorVendas     ();
    int get_contadorVitaminas  ();

    double get_totalBarometro  ();
    double get_totalCepillo    ();
    double get_totalCuritas    ();
    double get_totalDesodorante();
    double get_totalJeringa    ();    
    double get_totalPaniales   ();    
    double get_totalSuero      ();
    double get_totalTermometro ();
    double get_totalVendas     ();
    double get_totalVitaminas  ();







};
