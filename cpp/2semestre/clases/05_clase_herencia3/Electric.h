#include "Car.h"
#include <iostream>
#pragma once


class Electric: public Car
{
protected:
    int capacity;
public:
    Electric(/* args */): Car("no model"), capacity(0){};
    Electric(int capacity, std::string model):Car(model), capacity(0){};
    ~Electric();
};

