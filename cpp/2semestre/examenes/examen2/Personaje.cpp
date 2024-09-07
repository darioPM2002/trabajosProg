#include "Personaje.h"

Personaje::Personaje()
{
       resistencia = new int;
       *resistencia =10;
       vidas = new int;
       *vidas =1;

        
}

Personaje::Personaje(int v)
{
    resistencia = new int;
    *resistencia =10;
    vidas = new int;
    if (v>2)
    {
        *vidas =v;
    }else
    {
    *vidas =2;
    }
    

    std::cout << "el valor de la resistencia desde contruc es" << *resistencia << std::endl;
    
  
}

void Personaje::atacar(Personaje &p)
{
    std::cout << "Atacando desde personaje" << std::endl;
}

void Personaje::quitarResis(int n)
{
    
    if (*vidas> 0)
    {
      
    *resistencia = *resistencia-n; 

    if (*resistencia<0)
    {
        *vidas =*vidas-1;
        std::cout << "Se ha quitado una vida y la resistencia es 10 de nuevo" << std::endl;
          std::cout << "Este personaje ahora tiene: " << *vidas<<  " vidas"<<std::endl;
        *resistencia =10;
    }
    
  
    }else
    {
        std::cout << "No puedes seguir atacando a este personaje ya no tiene vidas___________________" << std::endl;
    }
    
    
}

int Personaje::getResistencia()
{

return *resistencia;
}
