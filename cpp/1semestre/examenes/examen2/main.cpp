#include "supermercado.h"
#include "Cliente.h"
int main()
{
    superMercado miSupermercado(4);
    Cliente pedro("Pedro");
    Cliente martha("Martha");
    Cliente jose("Jose");
    Cliente maria("Maria");
    Cliente tomas("Tomas");




    miSupermercado.agregarCliente(tomas);
    miSupermercado.agregarCliente(martha);
    miSupermercado.agregarCliente(pedro);
    miSupermercado.agregarCliente(maria);
    miSupermercado.agregarCliente(tomas);

    miSupermercado.calculo_carnesGastoTotal("Pedro", 500);
    miSupermercado.calculo_dulceriaGastoTotal("Martha", 700);
    miSupermercado.calculo_frutasGastoTotal("Maria", 800);
    miSupermercado.calculo_vinosGastoTotal("Tomas", 100);
    miSupermercado.calculo_carnesGastoTotal("Paula", 1000);

    
    miSupermercado.calculo_carnesGastoTotal("Pedro", 100);
    miSupermercado.calculo_dulceriaGastoTotal("Martha", 300);
    miSupermercado.calculo_frutasGastoTotal("Maria", 400);
    miSupermercado.calculo_vinosGastoTotal("Tomas", 200);
    miSupermercado.calculo_carnesGastoTotal("Paula", 200);

 

   



    miSupermercado.calcularGastoTotal();

    return 0;
}
