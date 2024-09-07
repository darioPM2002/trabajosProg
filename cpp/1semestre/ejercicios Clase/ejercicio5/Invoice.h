#include"Person.h"
#include"Product.h"
#include<string>
using namespace std;

#pragma once
class Invoice
{
private:
    double totalAmount;
    double taxes;
    double subtotal;
    string sellerName;
    int invoiceNumber;
    int numberOfProducts;
    //lista de productos
    Product* listproducts;
    Person cliente;
    int contador;

public:
    
    Invoice();//contructor default

    Invoice(string name, int invoiceNumber, int numberOfProducts );
    void addProduct(Product producto);
    void setCliente(Person persona);

    void printInvoidValue();

};