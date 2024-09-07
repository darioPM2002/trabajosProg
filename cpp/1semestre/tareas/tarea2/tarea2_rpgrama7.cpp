/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void invertirNumero(){
    int numero =350039;
    int *a= new int[6];
      int numeroFinal = 0;
    for (int i = 0; i <=5 ; i++) {
        numeroFinal = numero%10;
        numero= numero/10;
        a[i]= numeroFinal;
        
        
    }
     std::cout << "El numero original es: 350039" << "y  el numero invertido es: "<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<  std::endl;
}


int main()
{
    invertirNumero();

    return 0;
}
