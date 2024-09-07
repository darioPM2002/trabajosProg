#include "Mago.h"



void Mago::atacar(Personaje & p)
{
    std::cout << "El Mago ha atacado con sus hechizos quitando 5 puntos de resistencia" << std::endl;
    p.quitarResis(3);
    std::cout << "ahora el que atacas ahora tiene " <<p.getResistencia() << std::endl;
}
