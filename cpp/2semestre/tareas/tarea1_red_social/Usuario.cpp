#include "Usuario.h"

Usuario::Usuario()
{
    nombre = "no name";
    email  = "no email";
}

Usuario::Usuario(std::string n, std::string em)
{
    nombre = n;
    email = em;


}

std::string Usuario::getNombre()
{
   return nombre;


}