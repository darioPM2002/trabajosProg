#include "ListManager.h"

ListManager::ListManager()
{
    size = 20;
    count = 0;
    ListAdress = new Object* [size];
};

ListManager::~ListManager()
{
    delete ListAdress;
};

void ListManager::add(Object *o)
{
    if (count < size){
    ListAdress[count++] = o;
    }else
    {
        std::cout << "La lista esta llena" << std::endl;
    }
    
}

void ListManager::printAll()
{
    for (int i = 0; i < count; i++)
    {
        ListAdress[i] ->print();
    }
    
}
