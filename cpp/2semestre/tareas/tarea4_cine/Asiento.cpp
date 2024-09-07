#include "Asiento.h"

Asiento::Asiento()
{

    tAiento = 1; //1S, 2R, 3VIP
    reservado = false;
    nuAsiento = 0;
    costo = 40.0;
    ti = "Sencillo";
    cliente = Cliente();
}

Asiento::Asiento(int ti, Cliente c)
{
 
     tAiento = ti; //1S, 2R, 3VIP
    if (tAiento ==1)
    {
        costo = 40.0;
    }
    if (tAiento ==2)
    {
        costo = 90.0;
    }
    if (tAiento ==3)
    {
        costo = 180.0;
    }    
     reservado = false;
     nuAsiento = 0;
     cliente = c;
}

void Asiento::printInfo()
{   
    ti = "";
    if (tAiento == 0)
    {
        ti = "Sencillo";

    }
    if (tAiento == 1)
    {
        ti = "Reclinable";

    }
        if (tAiento == 2)
    {
        ti = "Vip";

    }
    std::string res ="";
    if (reservado)
    {
       res = "Reservado";
    }else
    {
       res = "No reservado";
    }
    std::cout << "<------------------------------------->" << std::endl;
    std::cout << "Asiento numero <" << nuAsiento<< "> tipo:" << ti << std::endl;
    std::cout << "Costo: $" << costo<<" // " << res<< std::endl;
    std::cout << "Cliente: " << cliente.getNombre()<< std::endl;
    std::cout << "<------------------------------------->" << std::endl;
    std::cout << "" << std::endl;
}

void Asiento::setNumAsiento(int n)
{
    nuAsiento = n;
}
