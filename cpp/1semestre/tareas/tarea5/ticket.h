#include <iostream>
#pragma once
class ticket
{
private:
    std::string tipo_boleto;
    double precio;

public:
    ticket();
    ticket(std::string tipo_boleto_user);
    std::string get_tipo_boleto();
};
