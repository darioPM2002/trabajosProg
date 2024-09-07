#include <iostream>
class Suero
{
private:
    double precio;
    double mililitros;
    std::string color;
    std::string marca;
    std::string sabor;
public:
    Suero(/* args */);
    Suero(double precio_user, double mililitros_user,  std::string color_user, std::string marca_user, std::string sabor_user);
    
    double get_precio();
    double   get_mililitros();
    std::string  get_color(); 
    std::string get_marca();
    std::string get_sabor();
    std::string get_ID();


    void set_precio(double precio_user);
};

