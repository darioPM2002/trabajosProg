#include <iostream>
class Vendas
{
private:
    double precio;
    int numero_unidades;
    double tamanio; 
    std::string marca;
    std::string color;
public:
    Vendas(/* args */);
    Vendas(double precio_user, int numero_unidades_user, double tamanio_user, std::string marca_user, std::string color_user);
    
    double get_precio();
    int    get_numero_unidades();
    double get_tamanio(); 
    std::string get_marca();
    std::string get_color();
    std::string get_ID();

    void set_precio(double precio_user);
};
