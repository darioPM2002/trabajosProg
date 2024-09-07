#include <iostream>
#pragma once
class Cliente
{
private:
    int edad;
    std::string genero; //true hombr
    std::string mayorEdad;
    std::string nombre;

public:
    Cliente(/* args */);
    Cliente(int edad, std::string genero, std::string nombre_user);
    int get_edad();
    std::string get_genero();
    std::string get_mayorEdad();
    std::string get_nombre();


};