#include "Personaje.h"
#include "Mago.h"
#include "Princesa.h"

#include "Heroe.h"

int main()
{

    Heroe juan(2);
    Princesa peach(2);
    Mago alberto(3);
    Heroe zoe(1);
    alberto.atacar(zoe);
    alberto.atacar(zoe);
    alberto.atacar(zoe);
    alberto.atacar(zoe);
    alberto.atacar(zoe);
    alberto.atacar(zoe);
    juan.atacar(zoe);
    juan.atacar(zoe);
    juan.atacar(zoe);
    juan.atacar(zoe);

    return 0;
}
