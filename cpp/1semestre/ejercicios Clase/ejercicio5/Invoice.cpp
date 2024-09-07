#include"Invoice.h"
#include <iostream>


Invoice::Invoice(){

sellerName= "Juan";
invoiceNumber=13245;

numberOfProducts= 7898;
contador =0;

};


    Invoice::Invoice(string sellerName, int invoiceNumber, int numberOfProducts){

        sellerName=sellerName;
        invoiceNumber=invoiceNumber;
        numberOfProducts=numberOfProducts;
        listproducts= new Product[numberOfProducts];
        contador =0;

    };
     void Invoice::addProduct(Product producto){

        if (contador<numberOfProducts)
        {
            listproducts[contador++] = producto;
        }else{
            std::cout << "No se pueden agregar más productos" << std::endl;
        }
        
        
     };

   void Invoice::setCliente(Person persona){
        cliente=persona;
   };  


   
    void Invoice::printInvoidValue(){

       double suma=0;

       double taotaIva=0;

        for (size_t i = 0; i <contador; i++)
        {
            taotaIva= listproducts[i].getPrice() +(listproducts[i].getPrice() *0.16);
            suma = suma+ taotaIva;
        }
        

        std::cout << "precio total: " << suma << std::endl;
    };