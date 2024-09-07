#include <iostream>
class Curitas
{
private:
    double      precio;
    int         unidadesPaquete;
    std::string tipoDisenio;
    std::string marca;
    std::string tipoCurita;


public:
    Curitas();
    Curitas(double precio_user, int unidadesPaquete_user, std::string tipoDisenio_user, std::string marca_user, std::string tipoCurita_user);

    double      get_precio();
    int         get_unidadesPaquete();
    std::string get_tipoDisenio();
    std::string get_marca();
    std::string get_tipoCurita();

    void      set_precio(double precio_user);
    std::string get_ID();

};
