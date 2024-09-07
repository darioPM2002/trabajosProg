#include "Date.h"

Date::Date()
{
    dia = 0;
    mes = 0;
    anio =0;
}

Date::Date(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}

std::string Date::getDate()
{
    std::string date= "";
    date.append(std::to_string(dia)).append("/").append(std::to_string(mes)).append("/").append(std::to_string(anio));
    return date;
}
