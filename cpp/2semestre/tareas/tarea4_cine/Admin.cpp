#include "Admin.h"

Admin::Admin()
{
    nEmpleado =0;
    sueldo = 0.0;
    fIngreso = Date();
    listAsientos = new Asiento*  [12];
}

Admin::Admin(int nE, double s, Date fI ,Cine & cin)
{
    ci = &cin;
    nEmpleado =nE;
    sueldo = s;
    fIngreso = fI;    
    listAsientos = ci->getAsientos();
}

void Admin::reserNum(int num, Cliente c)
{   
    if ( listAsientos[num-1]->reservado)
    {
        std::cout << "Lo siento este asiento ya esta ocupado" << std::endl;
    }else
    {
        std::cout << "################################" << std::endl;
        std::cout << "El administrador con numero: "<< nEmpleado<< " hizo lo siguiente:"<< std::endl;
        std::cout << "Asiento reservado numero: "<<num<< " por tipo: "<<listAsientos[num-1]->ti <<" con exito por " << c.getNombre()<< std::endl;
        listAsientos[num-1]->reservado = true;
        listAsientos[num-1]->cliente =c;
        std::cout << "El asiento tiene un costo de: $" <<listAsientos[num-1]->costo << std::endl;
        std::cout << "################################" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
    }
    


}

void Admin::resertipo(int num, Cliente c)
{
    for (int i = 0; i < 12; i++)
    {
       if (listAsientos[i]->reservado != true && listAsientos[i]->tAiento == num )
       {
        std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
        std::cout << "El administrador con numero: "<< nEmpleado<< " hizo lo siguiente:"<< std::endl;
        std::cout << "Asiento reservado con exito por tipo: "<<listAsientos[i]->ti <<" numero: "<< listAsientos[i]->nuAsiento <<" cliente " << c.getNombre()<< std::endl;
        std::cout << "El asiento tiene un costo de: $" <<listAsientos[i]->costo << std::endl;
        listAsientos[i]->reservado = true;
        listAsientos[i]->cliente =c;
        std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
        std::cout << "" << std::endl;
        return;

       }
    
    }
     std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
        std::cout << "EROR: NO HAY ASIENTOS DE ESTE TIPO LIBRES "<< std::endl;
        std::cout << "%%%%%%%%%%%%%%%%" << std::endl;
        std::cout << "" << std::endl;
    
}

void Admin::cancelRe(int num)
{
    std::cout << "XXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
    std::cout << "El administrador con numero: "<< nEmpleado<< " hizo lo siguiente:"<< std::endl;
    std::cout << "Se cancelo la reerva del asiento numero " << num<< std::endl;
    listAsientos[num-1]->reservado = false;
    listAsientos[num-1]->cliente =Cliente();
    std::cout << "XXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
    std::cout << "" << std::endl;
}
