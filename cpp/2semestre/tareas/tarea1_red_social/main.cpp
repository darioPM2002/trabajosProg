#include "Usuario.h"
#include "Publicacion.h"
#include "Moderador.h"
int main()
{
   Usuario pedro("Pedro", "pedro@gmail.com");
   Usuario marta("Marta", "marta@gmail.com");
   Usuario juan("Juan", "juan@gmail.com");
   Moderador nuevoMod;
   nuevoMod.CrearPublicacion(pedro, "Hola este es mi primer publicacion", 89);
   nuevoMod.CrearPublicacion(marta, "Hola soy marta este es mi primer publicacion", 20);
   nuevoMod.CrearPublicacion(juan, "Hola soy juan este es mi primer publicacion", 10);

   
   
   
return 0;
}
