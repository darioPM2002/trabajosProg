#include"Hacienda.h"
#include"Contribuyente.h"
#include<iostream>
using namespace std;

int main()
{
    Hacienda sat;
    Contribuyente aldo;
    sat.cambiarRegimenFiscal(aldo, "Régimen Simplificado de Confianza");

    cout<<"aldo tiene un regimen fiscal " << aldo.getRegimenFiscal();
}