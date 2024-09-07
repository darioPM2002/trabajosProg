#include "impuestosClass.h"
#include <iostream>


int main()
{
    double salario;
    impuestosClass miImpuestos;
    std::cout << "Ingresa tu salario" << std::endl;
    std::cin >> salario;

    
    miImpuestos.calcularIva(salario); 
    miImpuestos.calcularIsr(salario);

    return 0;
}
