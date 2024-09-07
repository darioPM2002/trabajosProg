#include"Product.h"


Product::Product(){
name = "No name";
price = 0.0;
expirationDate = Date(1,1,1999);
}


Product::Product(string name, double price, Date expirationDate){

name = name;
price = price;
expirationDate = expirationDate;
};

double Product::getPrice(){

    return price;
}