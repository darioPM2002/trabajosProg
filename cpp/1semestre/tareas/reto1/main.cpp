#include "Barometro.h"
#include "CepilloDientes.h"
#include "Curitas.h"
#include "Desodorante.h"
#include "jeringa.h"
#include "Panales.h"
#include "Suero.h"
#include "Termometro.h"
#include "Vendas.h"
#include "Vitaminas.h"
#include "Farmacia.h"
#include "Cliente.h"


//H=hombre M=mujer
int main()
{
    Farmacia mifarmacia(10, 20);

    Barometro miBarometro(1200.0, 19.0, "Liftman", "Azul", "Chico");
    CepilloDientes miCepillo(22.0, 300, "Rojo", "Chico", "Colgate");
    Curitas miCuritas(34.0, 20, "Marvel", "Walmart", "Dedo");
    Desodorante miDesodorante(59.0, 45.0, "Negro", "Gilette", "Chocolate");
    jeringa miJeringa(9.0, 5.0, 15.0, "Blax", "Plastico");
    Panales miPanales(249.0, 25, "BabyDeepers", "6 meses", "Algodon");
    Suero miSuero(30.0, 474.0, "Morado", "Suerox", "Uva");
    Termometro miTermometro(99.0, true, "Liftman", "Plastico","Blanco" );
    Vendas miVendas(29.0, 2, 50.0, "Walmart", "Blanco");
    Vitaminas miVavinas(149.0, 50, "Vitamina C", "Naranja", "Vitaforce");


    Cliente jeff(14, "H", "jeff");
    Cliente cristina(21, "M", "cristina");
    Cliente pablo(35, "H", "pablo");
    Cliente dario(17, "H", "dario");


    mifarmacia.ventaCliente(jeff, miCepillo.get_ID(), miCepillo.get_precio());
    mifarmacia.ventaCliente(cristina, miCuritas.get_ID(), miCuritas.get_precio());
    mifarmacia.ventaCliente(jeff, miVavinas.get_ID(), miVavinas.get_precio());
    mifarmacia.ventaCliente(dario, miCepillo.get_ID(), miCepillo.get_precio());
    
    mifarmacia.ventaCliente(pablo, miSuero.get_ID(), miSuero.get_precio());
    mifarmacia.ventaCliente(pablo, miCuritas.get_ID(), miCuritas.get_precio());
    mifarmacia.ventaCliente(pablo, miDesodorante.get_ID(), miDesodorante.get_precio());
    mifarmacia.ventaCliente(pablo, miCepillo.get_ID(), miCepillo.get_precio());
    
    mifarmacia.ventaCliente(jeff, miVendas.get_ID(), miVendas.get_precio());
    mifarmacia.ventaCliente(cristina, miVendas.get_ID(), miVendas.get_precio());
    mifarmacia.ventaCliente(jeff, miVavinas.get_ID(), miVavinas.get_precio());
    mifarmacia.ventaCliente(dario, miCepillo.get_ID(), miCepillo.get_precio());
    
    mifarmacia.contadorDeProductos();
    return 0;
}
