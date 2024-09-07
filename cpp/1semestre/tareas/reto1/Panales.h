#include <iostream>
class Panales
{
private:
    double      precio;
    int         unidadesPaquete;
    std::string marca;
    std::string tamanio;
    std::string material;


public:
    Panales();
    Panales(double precio_user, int unidadesPaquete_user, std::string marca_user, std::string tamanio_user, std::string material_user);

    double      get_precio();
    int         get_unidadesPaquete();
    std::string get_marca();
    std::string get_tamanio();
    std::string get_material();
     std::string get_ID();
    void set_precio(double precio_user);
};
