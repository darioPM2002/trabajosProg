#include "Car.h"
#include <iostream>
#pragma once


class Gas: public Car
{
protected:
    int capacity;
public:
    Gas(/* args */): Car("no model"), capacity(0){};
    Gas(int capacity, std::string model):Car(model), capacity(0){};
    ~Gas();
};
