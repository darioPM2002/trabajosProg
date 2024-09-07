#include <iostream>
#pragma once

class Figura
{
protected:
    std::string nombbre;
    int lados;
public:
    Figura(/* args */);
    Figura(std::string n, int l);
    virtual double getArea(); // virtual se pone para que ocupes el metodo de los hijos, no el de la herencia
    //en caso que los hijos no tengan, usa el del padre en la herencia
};


