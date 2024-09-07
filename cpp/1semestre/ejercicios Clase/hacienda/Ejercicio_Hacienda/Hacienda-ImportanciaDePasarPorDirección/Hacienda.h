#include"Contribuyente.h"

#pragma once
class Hacienda
{
private:
    Contribuyente* ListaContribuyentes;
    int numContribuyentes;
    int cont;

public:
    Hacienda();
    Hacienda(int numCont);
    //pasar por referencia, & modifica el valor que estamos pasando, no hacemos una copia
    //parametros;
    //pasar por valor
    //pasar por referencia (&)
    //pasar por dirección

    //  (*) pointer  direccion  ejemplo:
    //duplica(int *a)
        
    //return int 2*(*a)
    void cambiarRegimenFiscal(Contribuyente & p, string regimen);

};