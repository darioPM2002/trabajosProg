#include "ProductoBase.h"
ProductoBase::ProductoBase(/* args */)
{
}

ProductoBase::ProductoBase(double precio_user, std::string ID_user)
{
    precio= precio_user;
    ID= ID_user;
}

double ProductoBase::getPrecio(){return precio;};
std::string ProductoBase::getID(){ return ID;};