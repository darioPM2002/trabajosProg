#include "calculadora.h"
#include <iostream>
using namespace std;

// Ejercicio 1. Escribe una clase para representar una Calculadora. La
// calculadora no tiene atributos, pero sí tienes métodos:

// Suma (método que recibe como parámetro dos valores enteros y devuelve un
// entero con la suma) Resta (método que recibe como parámetro dos valores
// enteros y devuelve un entero con la resta) Multiplicación (método que recibe
// como parámetro dos valores enteros y devuelve un entero con la
// multiplicación) División (método que recibe como parámetro dos valores
// enteros y devuelve un entero con la división). Si es una división entre cero,
// entonces imprime un mensaje de error y devuelve el numerador. Si no hay
// error, devuelve un entero con el resultado. Máximo (método que recibe 2
// número y devuelve el mayor de ambos) Mínimo (método que recibe 2 números y
// devuelve el menor de ambos)

int main() {
  Calculadora miCalculadora;
  int a;
  int b;

  std::cout << "Ingresa el primer numero";
  std::cin >> a;
  std::cout << "Ingresa el segundo numero";
  std::cin >> b;
  miCalculadora.suma(a,b);
  miCalculadora.resta(a,b);
  miCalculadora.division(a, b);
  miCalculadora.multiplicacion(a,b);
  miCalculadora.menor(a,b);
  miCalculadora.max(a,b);
  
  return 0;
}