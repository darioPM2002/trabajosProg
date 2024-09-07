#include "Garage.h"

Garage::Garage()
{
    cont =0;
    listaCars = 0;

}



Garage::Garage(int size)
{
    listaCars = new Car[size];
    cont =size;
}
Garage::~Garage()
{
    delete [] listaCars; //IMPORTANTE PONER [] PARA QUE SE ELIMINE TODA LA LISTA, DE LO CONTRARIO SOLO SE ELIMINA UN OBJETO
}

void Garage::setCar(int pos, Car & c)
{
    listaCars[pos-1] = c;
}
