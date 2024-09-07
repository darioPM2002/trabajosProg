#include <iostream>

class Desodorante
{
private:
  
  double      precio;
  double      contenidoNeto;
  std::string color;
  std::string marca;
  std::string olor;

public:
    Desodorante();
    Desodorante(double precio_user, double contenidoNeto_user, std::string color_user, std::string marca_user, std::string olor_user);

  double      get_precio();
  double      get_contenidoNeto();
  std::string get_color();
  std::string get_marca();
  std::string get_olor();

  std::string get_ID();

  void      set_precio(double precio_user);
};
