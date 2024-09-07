#include "calculadora.h"
#include <iostream>
using namespace std;

int Calculadora::suma(int a, int b) {
  cout << "Suma:	\n";
  int resultado;
  resultado = a + b;
  cout << "El resultado de sumar "<<a<< "+ "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}



int Calculadora::resta(int a, int b) {
  cout << "Resta:	\n";


  int resultado;
  resultado = a - b;
  cout << "El resultado de restar "<<a<< " - "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}


double Calculadora::division(double a, double b) {
  cout << "Division:	\n";
   
  double resultado;
  resultado = a / b;

  if (a ==0 or b ==0){
    cout << "Error en division"<<"\n";
    return 0;
  }
   cout << "El resultado de "<<a<< " / "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}


int Calculadora::multiplicacion(int a, int b) {
  cout << "Multiplicacion:	\n";


  int resultado;
  resultado = a * b;
   cout << "El resultado de "<<a<< " * "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}


int Calculadora::max(int a, int b) {
  cout << "Numero mayor:	\n";


  int resultado;

  if(a>b){
     resultado = a;
  }else{
     resultado = b;
  }
 
   cout << "El numero mayor entre "<<a<< " y "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}

int Calculadora::menor(int a, int b) {

     cout << "Numero Menor:	\n";

  int resultado;

  if(a<b){
     resultado = a;
  }else{
     resultado = b;
  }
 
   cout << "El numero menor entre "<<a<< " y "<< b<<" es: " << resultado<<"	\n";
  return resultado;
}
