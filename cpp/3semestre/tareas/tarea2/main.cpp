#include <iostream>
#include <vector>
#include <ctime> 
#include "Busquedas.hpp"
#include "Ordenamiento.hpp"
#include <functional>
#include <algorithm>


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
    std::vector<int> n10=  crea_vector(genera_int, 10);
    std::vector<int> n100=  crea_vector(genera_int, 100);
    std::vector<int> n1000=  crea_vector(genera_int, 1000);
    std::vector<int> n10000=  crea_vector(genera_int, 10000);
    std::vector<int> n100000=  crea_vector(genera_int, 100000);
    std::vector<int> n1000000=  crea_vector(genera_int, 1000000);

void hacerBusquedaBinaria (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


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
 Busquedas<int>::hacerBusquedas(tiempos[i], valorBuscado, Busquedas<int>::busquedaBinariaA);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        std::cout << "El valor buscado fue: " << valorBuscado
                  << " | Tiempo que tardo la busqueda binaria numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " segundos" << std::endl;
}

}
void hacerBusquedaSecuencial (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


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
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        std::cout << "El valor buscado fue: " << valorBuscado
                  << " | Tiempo que tardo la busqueda secuencial numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}
void hacerOrdeBurbuja (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
std::vector<int> resultado = Ordenamiento<int>::burbuja(tiempos[i], Ordenamiento<int>::asc);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        
                std::cout  << " | Tiempo que tardo ordenamiento burbuja numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}

void hacerOrdeSelección (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
std::vector<int> resultado = Ordenamiento<int>::seleccion(tiempos[i], Ordenamiento<int>::asc);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        
                std::cout  << " | Tiempo que tardo ordenamiento seleccion numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}

void hacerOrdeInsercion (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
std::vector<int> resultado = Ordenamiento<int>::insercion(tiempos[i], Ordenamiento<int>::asc);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        
                std::cout  << " | Tiempo que tardo ordenamiento insercion numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}
void hacerOrdeQuickSort (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
std::vector<int> resultado = Ordenamiento<int>::quicksort(tiempos[i], Ordenamiento<int>::asc);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        
                std::cout  << " | Tiempo que tardo ordenamiento QuickSort numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}
void hacerOrdeMergeSort (){

unsigned t0, t1;

t0=clock();
// Code to execute
t1 = clock();


std::vector <std::vector<int>> tiempos ={
    n10,
    n100,
    n1000,
    n10000,
    n100000,
    n1000000,};

for (size_t i = 0; i < tiempos.size(); i++)
{
t0=clock();
std::vector<int> resultado = Ordenamiento<int>::mergesort(tiempos[i], Ordenamiento<int>::asc);
t1 = clock(); 
            double tiempo_transcurrido_ms = static_cast<double>(t1 - t0) * 1000 / CLOCKS_PER_SEC;
        
                std::cout  << " | Tiempo que tardo ordenamiento mergeSrot numero " << i + 1
                  << ": " << tiempo_transcurrido_ms << " milisegundos" << std::endl;
}

}
int main(int argc, char const *argv[])
{
    hacerBusquedaBinaria();
    hacerBusquedaSecuencial();  
    hacerOrdeInsercion();
    /* code */
    return 0;
}
