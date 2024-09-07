/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
  bool sumaDeDivisores(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    
    
    
    if (numero == suma){
         return true;
     }else{
         return false;
    }
    


    
}
void calcularNaturales(){
    int contador=0;

    for (int i = 1; i <=1000000; i++) {
      
        if(sumaDeDivisores(i)){
            contador++;
        }
        
    }
    std::cout << "hay " <<contador<< " numeros naturales perfectos entre el 1 y el 1000000" <<std::endl;
}
int main()
{
    std::cout << "Esto va tardar en calcular algo..." << std::endl;
    calcularNaturales();

    return 0;
}
