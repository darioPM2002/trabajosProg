/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
void calculaBisiesto(int year){
    if (year %4 == 0 and year %100 != 0 or year %400 ==0){
        std::cout << "El año: " << year<< " es un año bisiesto"<< std::endl;
        
    }else{
        std::cout << "El año: " << year<< " NO es un año bisiesto"<< std::endl;

    }
}

int main()
{   
    
    int año;
    std::cout << "Ingrese año para comprobar si es bisiesto" << std::endl;
    std::cin >> año;
    calculaBisiesto(año);

    return 0;
}
