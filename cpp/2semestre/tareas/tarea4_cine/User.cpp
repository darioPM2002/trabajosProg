#include "User.h"

Usuario::Usuario()
{
    nombre = "";
    telefono = 0;
    correo = "";
}

Usuario::Usuario(std::string n, int t, std::string c)
{

    
    nombre = n;
    telefono = t;
    correo = c;

}
