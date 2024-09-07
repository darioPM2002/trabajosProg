#include "Base.h"
#pragma once
#include <iostream>
class Derivada : public Base //significa que la clase hereda de la clase Base
{
private:

public:
                            // : virtaul public D
    Derivada(int num, int nh) :  Base(num, nh){
        

    }
    
    Derivada();
    void printValores();

};
