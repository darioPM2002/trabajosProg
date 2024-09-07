#include <iostream>

class ProductoBase
{
private:
    double precio;
    std::string ID;

public:
    ProductoBase(/* args */);
    ProductoBase(double precio_user, std::string ID_user);
    double getPrecio();
    std::string getID();

};

