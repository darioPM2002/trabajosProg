/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int suma=0;
  for(int i =0;i<1000; i++){
      if(i%3==0 or i%5==0){
         
          suma= suma+i;
      }
       
  }
  std::cout << "la suma de los multiplos de 3 y 5 entre el 0 y el 1000 es: "<<suma << std::endl;
  return 0;
}