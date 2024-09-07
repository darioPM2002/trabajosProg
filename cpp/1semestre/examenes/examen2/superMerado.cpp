
#include "superMercado.h"


superMercado::superMercado(/* args */)
{
numeroClientes=0;
contadorClientes=0;
clientes = new Cliente[numeroClientes];
cantidadGastoTotal=0;
frutasGastoTotal=0;
verdurasGastoTotal=0;
carnesGastoTotal=0;
vinosGastoTotal=0;
dulceriaGastoTotal=0;    
}

superMercado::superMercado(int numeroClientes_user)
{
numeroClientes=numeroClientes_user;
contadorClientes=0;
clientes = new Cliente[numeroClientes];
cantidadGastoTotal=0;
frutasGastoTotal=0;
verdurasGastoTotal=0;
carnesGastoTotal=0;
vinosGastoTotal=0;
dulceriaGastoTotal=0;    }

void superMercado::calculo_frutasGastoTotal  (std::string nombre_user, double cantidadGastar_user){
    for (int i = 0; i < numeroClientes; i++)
    {
       if (clientes[i].get_nombre() == nombre_user)
       {

        std::cout << "existe cliente" << std::endl;
        clientes[i].set_cantidadGastada(cantidadGastar_user+clientes[i].get_cantidadGastada());

       }else
       {

       }
       
       
    }
    
    
    frutasGastoTotal=frutasGastoTotal+cantidadGastar_user;};
    
void superMercado::calculo_verdurasGastoTotal(std::string nombre_user, double cantidadGastar_user){    
     verdurasGastoTotal=verdurasGastoTotal+cantidadGastar_user;
         for (int i = 0; i < numeroClientes; i++)
    {
       if (clientes[i].get_nombre() == nombre_user)
       {

        std::cout << "existe cliente" << std::endl;
        clientes[i].set_cantidadGastada(cantidadGastar_user+clientes[i].get_cantidadGastada());

       }else
       {

       }
       
       
    }
     };

void superMercado::calculo_carnesGastoTotal  (std::string nombre_user, double cantidadGastar_user){  
    carnesGastoTotal=carnesGastoTotal+cantidadGastar_user;
        for (int i = 0; i < numeroClientes; i++)
    {
       if (clientes[i].get_nombre() == nombre_user)
       {

        std::cout << "existe cliente" << std::endl;
        clientes[i].set_cantidadGastada(cantidadGastar_user+clientes[i].get_cantidadGastada());

       }else
       {

     
       }
       
       
    }
    };

void superMercado::calculo_vinosGastoTotal   (std::string nombre_user, double cantidadGastar_user){   
    vinosGastoTotal=vinosGastoTotal+cantidadGastar_user;
        for (int i = 0; i < numeroClientes; i++)
    {
       if (clientes[i].get_nombre() == nombre_user)
       {

        std::cout << "existe cliente" << std::endl;
        clientes[i].set_cantidadGastada(cantidadGastar_user+clientes[i].get_cantidadGastada());

       }else
       {

       
       }
       
       
    }
    };

void superMercado::calculo_dulceriaGastoTotal(std::string nombre_user, double cantidadGastar_user){   
     dulceriaGastoTotal=dulceriaGastoTotal+cantidadGastar_user;
         for (int i = 0; i < numeroClientes; i++)
    {
       if (clientes[i].get_nombre() == nombre_user)
       {

        std::cout << "existe cliente" << std::endl;
        clientes[i].set_cantidadGastada(cantidadGastar_user+clientes[i].get_cantidadGastada());

       }else
       {

       }
       
       
    }
     };



  void superMercado::calcularGastoTotal(){

    cantidadGastoTotal = cantidadGastoTotal +frutasGastoTotal+verdurasGastoTotal+carnesGastoTotal+vinosGastoTotal+dulceriaGastoTotal;

    std::cout << "El gasto toatal en frutas es : " << frutasGastoTotal<< std::endl;
    std::cout << "El gasto toatal en verduras es : " << verdurasGastoTotal<< std::endl;
    std::cout << "El gasto toatal en carnes es : " << carnesGastoTotal<< std::endl;
    std::cout << "El gasto toatal en vinos es : " << vinosGastoTotal<< std::endl;
    std::cout << "El gasto toatal en culceria es : " << dulceriaGastoTotal<< std::endl;

    
        for (int i = 0; i < numeroClientes; i++)
    {
        std::cout << "El gasto de " << clientes[i].get_nombre()<<"es: "<<clientes[i].get_cantidadGastada()<< std::endl;
       
    }

    double a =0;

    if (frutasGastoTotal>a)
    {
        a=frutasGastoTotal;
        
    };
    
    if (verdurasGastoTotal>a)
    {
        a=verdurasGastoTotal;
        
    };
    
    if (carnesGastoTotal>a)
    {
        a=carnesGastoTotal;
        
    };
    
    if (vinosGastoTotal>a)
    {
        a=vinosGastoTotal;
        
    };

    if (dulceriaGastoTotal>a)
    {
        a=dulceriaGastoTotal;
        
    };
    std::cout << "El departamento con mayor gasto gastó " << a<< std::endl;


  };



void superMercado::agregarCliente(Cliente cliente_user){
    
    if (contadorClientes<numeroClientes  )
    {
        clientes[contadorClientes++]=cliente_user;
        std::cout << "agregado cliente numero:" << contadorClientes<< std::endl;
    }else{
        std::cout << "Error no puedes agregar más" << std::endl;
    }
    }

    