#include <iostream>
#pragma once
class Date
{
private:
    int dia;
    int mes;
    int anio;

public:
    Date();
    Date(int d, int m, int a);
    std::string getDate();
};

