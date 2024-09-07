
#ifndef Busquedas_HPP
#define Busquedas_HPP
#include <iostream>
#include <vector>
#include <functional> // Para std::function

template <typename T>
class Busquedas{
public:
using FuncionBusqueda = std::function<int(std::vector<T>, T)>; 
static int busquedaSecuencial(std::vector<T>, T);
static int busquedaBinaria(std::vector<T>, T);
static void hacerBusquedas(std::vector<T> e, T , FuncionBusqueda );
static int busquedaBinaria(std::vector<T>, T, int, int);
private:

};


template <typename T>  //PUEDE SER typename T o class T es convencion 
int  Busquedas<T>::busquedaSecuencial ( std::vector<T> e, T busqueda){
int i = 0; 
int encontrado = -1; //0 significa que YA se ha encontrado o -1 es no encontró la busqueda
long int length = e.size(); //longitud del vector
 
while (encontrado == -1 && i<length)
{
    if (e[i]==busqueda){
        encontrado =0;
    }
        i++;
}
return encontrado;
}

template <class T>

int Busquedas<T>::busquedaBinaria(std::vector<T> e, T valor)
{
   int size = (int) e.size() - 1;
    
    return busquedaBinaria(e, valor, 0, size);
}

template <class T> 
void Busquedas<T>::hacerBusquedas(std::vector<T> e, T valorBuscado, FuncionBusqueda metodoBusqueda) {
    int resultado = metodoBusqueda(e, valorBuscado); 
        
    if (resultado != -1) {
        std::cout << "Valor encontrado en la posición: " << resultado << std::endl;
    } else {
        std::cout << "Valor no encontrado." << std::endl;
    }
}


template <class T>
int Busquedas<T>::busquedaBinaria(std::vector<T> e, T valor, int inferior, int superior)
{
    if (inferior >= superior)
    {
        return -1;
    }
    else  {
        int mitad = (inferior + superior) / 2;
        
        if (e[mitad] == valor) {
            return mitad;
        }
        else if (valor < e[mitad])
            return busquedaBinaria(e, valor, inferior, mitad);
        else
            return busquedaBinaria(e, valor, mitad + 1, superior);
    }
}

#endif // Busquedas_HPP