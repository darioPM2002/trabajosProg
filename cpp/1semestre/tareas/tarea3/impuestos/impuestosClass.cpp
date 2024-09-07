
#include "impuestosClass.h"
#include <iostream>


 void impuestosClass::calcularIva(double cantidad){

int iva = cantidad* .16;
int cantidadTotal= cantidad +iva;

std::cout << "Tu monto inicial es: " << cantidad<< " el iva de esta cantidad es: "<< iva<< " el monto final es:"<< cantidadTotal<<"\n"<< std::endl;
}
 void impuestosClass::calcularIsr(double cantidad){
    
    double isr ;
    double cuota;

    if (cantidad >0 and cantidad<= 644.58){
        isr= 0.0192;
        cuota=0;
     }
    if (cantidad >644.58 and cantidad<= 5470.92){
        isr= 0.064; cuota=12.38;
    }   
    if (cantidad >5470.92 and cantidad<= 9614.66){
        isr= 0.1088; cuota=321.26;
    }
    if (cantidad >9614.66 and cantidad<= 11176.62){
        isr= 0.16; cuota=772.1;
    }
    if (cantidad >11176.62 and cantidad<= 13381.47){
        isr= 0.1792; cuota=1022.01;
    }
    if (cantidad >13381.47 and cantidad<= 26988.50){
        isr= 0.2136;cuota=1417.12;
    }
    if (cantidad >26988.50 and cantidad<= 42537.58){
        isr= 0.2352; cuota=4323.58;
    }
    if (cantidad >42537.58 and cantidad<= 81211.25){
        isr= 0.3;cuota=7980.73;
    }
    if (cantidad >81211.25 and cantidad<= 108281.67){
        isr= 0.32; cuota=19582.83;
    } 
    if (cantidad >108281.67 and cantidad<= 324854.01){
        isr= 0.34;cuota=28245.36;
    }
    if (cantidad >324854.01){
        isr= 0.35;cuota=101876.90;
    }
    
    double cantidadIsr = cantidad* isr;
    double resultadoIsr = cantidad -cantidadIsr;
    double resultadoFinal =resultadoIsr - cuota;

    std::cout << "Tu sueldo es:" << cantidad<< " el isr por esta cantidad es: "<< isr*100<< " por ciento, la cuaota fija por esta cantidad es:"<< cuota<<  std::endl;
    std::cout << "Tu sueldo después del ISR es " << resultadoIsr<< " Tu sueldo final después de la cuota  fija es:"<<resultadoFinal<< std::endl;
    
}