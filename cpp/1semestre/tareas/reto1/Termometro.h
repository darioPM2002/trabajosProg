#include <iostream>
class Termometro
{
private:
    double      precio;
    bool        isDigital;
    std::string marca;
    std::string material;
    std::string color;

    

public:
    Termometro();
    Termometro(double precio_user, bool isDigital_user, std::string marca_user, std::string material_user,std::string color_user);

    double      get_precio();
    bool        get_isDigital();
    std::string get_marca();
    std::string get_material();
    std::string get_color();
    std::string get_ID();


    void set_precio(double precio_user);


};
