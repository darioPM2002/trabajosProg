#include"Hacienda.h"

Hacienda::Hacienda(int numCont)
{
    numContribuyentes = numCont;
    cont = 0;
}
Hacienda::Hacienda()
{
    numContribuyentes = 0;
    cont = 0;
}
void Hacienda::cambiarRegimenFiscal(Contribuyente & contr, string regimen)
{

    contr.setRegimenFiscal(regimen);
}