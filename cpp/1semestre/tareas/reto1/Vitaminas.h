#include <iostream>
class Vitaminas
{
private:
double      precio;
int         pildorasTotales;
std::string tipoVitaminas;
std::string sabor;
std::string marca;

public:
    Vitaminas();
    Vitaminas(double precio_user, int pildorasTotales_user, std::string tipoVitaminas_user, std::string sabor_user, std::string marca_user);

    double      get_precio();
    int         get_pildorasTotales();
    std::string get_tipoVitaminas();
    std::string get_sabor();
    std::string get_marca();
    std::string get_ID();


    void      set_precio(double precio_user);

};
