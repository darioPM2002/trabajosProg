
#pragma once
#include "Object.h"
#include <iostream>

class ListManager
{
protected:
    Object ** ListAdress;
    int size;
    int count;
public:
    ListManager(/* args */);
    ~ListManager();
    void add(Object * o);
    void printAll();
};
