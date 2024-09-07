#include <iostream>
class jeringa
{
private:
    double precio;
    double capacidad;
    double tamanio; 
    std::string marca;
    std::string material_fabricacion;
public:
    jeringa();
    jeringa(double precio_user, double capacidad_user, double tamanio_user, std::string marca_user, std::string material_fabricacion_user);

    double get_precio();
    double get_capacidad();
    double get_tamanio(); 
    std::string get_marca();
    std::string get_material_fabricacion();
     std::string get_ID();

    void set_precio(double precio_user);
};

