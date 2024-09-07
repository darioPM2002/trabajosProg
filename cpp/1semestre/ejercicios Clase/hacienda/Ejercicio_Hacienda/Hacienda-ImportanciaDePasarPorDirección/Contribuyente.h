#include<string>
using namespace std; 

#pragma once
class Contribuyente
{
private:
    string regimenFiscal;

public:
    void setRegimenFiscal(string regimen);
    string getRegimenFiscal();
};