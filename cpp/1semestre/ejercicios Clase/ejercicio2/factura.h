#include <string>
#include <iostream>

#pragma once
//pragma sirve para no importar más de una vez el mismo paqeute  

class Factura
{
private:

  double total;
  std::string enterpriseName;
  //dirección de memoria donde se guarda string
  std::string *products;
  int folio;
  int dia;  
  int mes;
  int anio;
public:
    int getdia();
    int getmes();
    int getanio();

  int getFolio();
  double getTotal();
  std::string getEnterpriseName();
  std::string *getProducts();
  void setEnterpriseName(std::string name);
  
  void setDia(int a);
  void setMes(int a);
  void setAnio(int a);
};

