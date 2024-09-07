#include <iostream>
#pragma once
class Usuario
{
private:
    std::string nombre;
    std::string email;
public:
    Usuario();
    Usuario(std::string n, std::string em);
    std::string getNombre();
    

};




