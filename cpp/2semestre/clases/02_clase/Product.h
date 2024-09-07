#pragma once
#include <iostream>
#include "Offer.h"
class Product
{
private:
   std::string nombre;
   double price;
   friend class Offer;
public:
    Product(std::string nom, double prec);
    std::string getName();

};

Product::Product(std::string nom, double prec)
{
    nombre = nom;
    price  = prec;
}

std::string Product::getName()
{
    return nombre;
}
