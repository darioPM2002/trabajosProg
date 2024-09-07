#include <iostream>

int sumaIterativa(int n){       //Análisis del algoritmo   OE    || P

    int suma=0;                                         // 1     || 1(1) 
    for (int i = 0; i <n+1; i++)                        // 1+1+1 || 1(1)+1(n+1)+1(n)
    {
       suma = suma+i;//es dos veces y se ejecuta n veces  2     || 2(n)
    }
    return suma;                                      //  1      ||1(1)
                                                      //T(n)= 1(1)+1(1)+1(n+1)+1(n)+3(n)+1(!)
                                                      //T(n)= 1+1+n+1+n+3n+1
                                                      //T(n)= 4n+4
                                                      //O(n)= n
    //Complejidad espacial se refiere a que tan complejo es el algoritmo en memeira, en este algoritmo su complejidad es 3 porque
    // tenemos 3 variables , int n, int suma, int i, por lo que la complejidad es tres, es dicr es una complejidad constante
    //se escribe así =O(1) significa que es complejidad constante, la complejidad lineal es es O(n)                                            
  //En este método iterativo hay una una argumento de tipo entero que será el numero de iteraciones que hará neuestro
  //método, en cada iteracion se le sumará el número del 1 al n, será 1+2+3+4+5..+n
}

int sumaRecursiva(int n) {                   //Análisis del algoritmo   OE    || P
    if (n == 0) {                                                    // 1     || 1(1) 
        return 0;                                                    // 1     || 1(1) 
    } else {
        return n + sumaRecursiva(n - 1);                            // 1+1+1+1|| 4(1) 
    }
                                                      //T(n)= 1(1)+1(1)+4(1)
                                                      //T(n)= 1+1+4
                                                      //T(n)= 5
                                                      //O(n)= 5

   //En este algoritmo recursivo el étodo recibe un argumento entero, lo evalua si este es cero es decir llegó hasta
   // el ultimo bucle, si es así regresa cero, de lo contrario va regrer n + el resultado de sumar n recursivamente                                                   
}

int sumaDirecta(int n) {          //Análisis del algoritmo    OE     || P
    return (n * (n + 1)) / 2;                               // 4     || 4(1)    
                                                            //T(n)= 4
                                                            //O(n)= 4    

//Este método recibe un argumento entero, después lo multiplica por ese mismo argumento más 1 y pa toda esa operación
//la divide entre dos dando el resultado de la suma de 1 hasta n                                                                        
}


int main(int argc, char const *argv[])
{
    int n = 3;
    std::cout << "El resultado de la suma iterativa hasta " <<n << " es: "<< sumaIterativa(n)<< std::endl;
    
        
    std::cout << "El resultado de la suma recursiva hasta " <<n << " es: "<< sumaRecursiva(n)<< std::endl;
      std::cout << "El resultado de la suma directa de n= " <<n << " es: "<< sumaDirecta(n)<< std::endl;
    return 0;
}
