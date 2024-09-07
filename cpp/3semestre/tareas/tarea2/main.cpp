#include <iostream>
#include <vector>
#include <ctime> 
#include "Busquedas.hpp"
#include <functional>

int genera_int()
{
    return rand() % 100;
}

template <typename T>
std::vector<T> crea_vector(T(* genera)(), int n)
{
    /* Definir cantidad de elementos */
    
    /* Vector de elementos */
    std::vector<T> elementos(n);
    
    /* Generar un vector de elementos aleatorios */
    std::generate(elementos.begin(), elementos.end(), genera);
    
    return elementos;
}

void hacerBusquedaBinaria (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();
    std::vector<int> n10=  crea_vector(genera_int, 10);
    std::vector<int> n100=  crea_vector(genera_int, 100);
    std::vector<int> n1000=  crea_vector(genera_int, 1000);
    std::vector<int> n10000=  crea_vector(genera_int, 10000);
    std::vector<int> n100000=  crea_vector(genera_int, 100000);
    std::vector<int> n1000000=  crea_vector(genera_int, 1000000);

std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

int valorBuscado = 30;
for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
 Busquedas<int>::hacerBusquedas(tiempos[i], valorBuscado, Busquedas<int>::busquedaBinaria);
t1 = clock(); 

std::cout <<"El valor buscado fue: "+valorBuscado <<"tiempo que tardo las busquedaBinariasnumero"+i+1 <<t1-t0 << std::endl;
}

}
void hacerBusquedaSecuencial (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();
    std::vector<int> n10=  crea_vector(genera_int, 10);
    std::vector<int> n100=  crea_vector(genera_int, 100);
    std::vector<int> n1000=  crea_vector(genera_int, 1000);
    std::vector<int> n10000=  crea_vector(genera_int, 10000);
    std::vector<int> n100000=  crea_vector(genera_int, 100000);
    std::vector<int> n1000000=  crea_vector(genera_int, 1000000);

std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

int valorBuscado = 30;
for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
 Busquedas<int>::hacerBusquedas(tiempos[i], valorBuscado, Busquedas<int>::busquedaSecuencial);
t1 = clock(); 

std::cout <<"El valor buscado fue: "+valorBuscado <<"tiempo que tardo las busqueda secuencial numero"+i+1 <<t1-t0 << std::endl;
}

}

int main(int argc, char const *argv[])
{
    hacerBusquedaBinaria();
    hacerBusquedaSecuencial();  
    /* code */
    return 0;
}
