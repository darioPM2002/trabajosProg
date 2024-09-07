#include <iostream>
class Barometro
{
private:
    double      precio;
    double      longitud;
    std::string marca;
    std::string color;
    std::string tamanioBrazo;

public:
    Barometro();
    Barometro(double precio_user, double longitud_user, std::string marca_user, std::string color_user, std::string tamanioBrazo_user);

    double      get_precio();
    double      get_longitud();
    std::string get_marca();
    std::string get_color();
    std::string get_tamanioBrazo();

    std::string get_ID();

    void set_precio(double precio_user);
};