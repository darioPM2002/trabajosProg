
#include <iostream> 
#pragma once


class Persona
{
protected:
std::string name;
int phone;
std::string adress;
std::string birthDate;


public:
    Persona();
    Persona(std::string n, int p, std::string a, std::string b);
};
