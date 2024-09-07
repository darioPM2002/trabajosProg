#include "Heroe.h"



void Heroe::atacar(Personaje & p)
{
    if (this->resistencia>0)
    {
        std::cout << "El heroe ha atacado con sus espada quitando 3 puntos de resistencia" << std::endl;
    p.quitarResis(3);
    }
    
 

}
