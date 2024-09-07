
#ifndef BusquedasTemplate_HPP
#define BusquedasTemplate_HPP
#include <iostream>
#include <vector>

template <typename T>
class BusquedasTemplate{
public:

static int busquedaSecuencial(std::vector<T>, T);
static int busquedaBinaria(std::vector<T>, T);



private:

};


template <typename T>  //PUEDE SER typename T o class T es convencion 
int  BusquedasTemplate<T>::busquedaSecuencial ( std::vector<T> e, T busqueda){
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

template <typename T>
inline int BusquedasTemplate<T>::busquedaBinaria(std::vector<T>, T)
    {
    return 0;
}

#endif // BusquedasTemplate_HPP