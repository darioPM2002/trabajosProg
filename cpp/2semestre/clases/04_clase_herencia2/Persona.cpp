#include "Persona.h"


Persona::Persona(/* args */)
{
    name = "no name";
    phone = 0;
    adress = "no adress";
    birthDate = "no birthday";

}

 Persona::Persona(std::string n, int p, std::string a, std::string b )
{
    name = n;
    phone = p;
    adress = a;
    birthDate = b;

}
