/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
bool comprobacionPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int calcularPrimos1000(){
    int numero= 1000;
    int contador=0;
    while(numero <=100000){
        if(comprobacionPrimo(numero)){
            contador++;
        }
        numero++;
        
        
    }
    
    std::cout << "hay " <<contador<< " numeros primos del 1000 al 100000" <<std::endl;
    
    return numero;
  
    
    
    
}
int main()
{
      calcularPrimos1000();

    return 0;
}