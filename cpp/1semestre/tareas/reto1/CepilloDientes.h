#include <iostream>
class CepilloDientes
{
private:
    double precio;
    int numeroCerdas;
    std::string color;
    std::string tamanio;
    std::string marca;

public:
    CepilloDientes();
    CepilloDientes(double precio_user, int numeroCerdas_user, std::string color_user, std::string tamanio_user, std::string marca_user);
    double      get_precio();
    int         get_numeroCerdas();
    std::string get_color();
    std::string get_tamanio();
    std::string get_marca();

    
    std::string get_ID();

    void      set_precio(double precio_user);

};