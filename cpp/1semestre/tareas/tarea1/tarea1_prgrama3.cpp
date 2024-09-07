/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

    
  void sumaDeDivisores(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    
    
    
    if (numero == suma){
        std::cout<<"el numero "<<numero << " es un natural perfecto" << std::endl;
    }else{
        std::cout<<"el numero "<<numero<< " NO es un natural perfecto" << std::endl;
    }
    


    
}
int main()
{
    std::cout << "Ingrese un numero a evaluar" << std::endl;
    int numeroUsuario;
    std::cin >> numeroUsuario ;
    sumaDeDivisores(numeroUsuario);

    return 0;
}