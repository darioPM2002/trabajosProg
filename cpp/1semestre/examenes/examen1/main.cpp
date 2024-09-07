
#include "Disco.h"
int main()
{
   Disco mi_disco(5, "Dario Peña", "Polos records", "Mexico");

   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));
   
   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));
   
   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));
   
   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));
   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));
   mi_disco.agregar_cancion(Cancion(1, "Cancion1", 3.7));

   mi_disco.calcular_duracion();
}
