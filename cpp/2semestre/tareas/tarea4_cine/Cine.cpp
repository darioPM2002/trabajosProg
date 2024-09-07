#include "Cine.h"
#include <string>

Cine::Cine(/* args */)
{
    listaAsientos = new Asiento *[12];
        for (int i = 0; i < 12; ++i)
    {
        listaAsientos[i] = new Asiento();
        listaAsientos[i]->nuAsiento = i+1;
        if (i<4)
        {
            listaAsientos[i]->tAiento = 0;
            listaAsientos[i]->ti = "Sencillo";
            listaAsientos[i]->costo =40;
        }
            if (i>3 & i<8)
        {
            listaAsientos[i]->tAiento = 1;
            listaAsientos[i]->ti = "Reclinable";
            listaAsientos[i]->costo =90;
        }
               if (i>7 & i<12)
        {
            listaAsientos[i]->tAiento = 2;
            listaAsientos[i]->ti = "Vip";
            listaAsientos[i]->costo =180;
        }
    }
}

 Asiento **Cine::getAsientos()
{
    return listaAsientos;
}

void Cine::printInfo()
{   
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
       std::cout << "" << std::endl;
    std::cout << "Los siguientes asientos estan reservados: " << std::endl;
    std::string asientos ="";
    for (int i = 0; i < 12; i++)
    {
    if (listaAsientos [i]->reservado)
    {
    asientos.append(std::to_string(i+1));
    asientos.append(" ");
    }

    }  
      std::cout << asientos << std::endl;
     std::cout << "" << std::endl;
    std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    std::cout << "" << std::endl;
    
}

Cine::~Cine()
{
    for (int i = 0; i < 12; ++i) {
        delete listaAsientos[i];
    }
    delete[] listaAsientos;
}
