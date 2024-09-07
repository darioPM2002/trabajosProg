#include "Princesa.h"



void Princesa::atacar(Personaje & p)
{
    std::cout << "La Princesa ha atacado con sus patadas quitando 4 puntos de resistencia" << std::endl;
    p.quitarResis(4);
    std::cout << "ahora el que atacas ahora tiene " <<p.getResistencia() << std::endl;
}
