#include"Date.h"
#include<string>
using namespace std;
#pragma once
class Product
{
private:
    string name;
    double price;
    Date expirationDate;
public:

Product();
Product(string name, double price, Date expirationDate);

double getPrice();

};