#include "Cliente.h"


Cliente::Cliente()
{
    edad = 0;
    genero="no genero designado";
    mayorEdad="";
    nombre="";


}

Cliente::Cliente(int edad_user, std::string genero_user, std::string nombre_user)
{
    nombre = nombre_user;
    edad = edad_user;
    genero=genero_user;

    if (edad <18)
    {
        mayorEdad ="menor";
    }else
    {
        mayorEdad ="mayor";
    }
    
    

}

    int Cliente::get_edad(){return edad;};
    std::string Cliente::get_genero()   {return genero;};
    std::string Cliente::get_mayorEdad(){return mayorEdad;};
    std::string Cliente::get_nombre(){return nombre;};    