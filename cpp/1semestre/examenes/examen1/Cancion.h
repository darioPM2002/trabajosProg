#include <iostream>

class Cancion
{
private:
    int         numero_track;
    std::string nombre_cancion;
    double      duracion_cancion;


public:
    Cancion();
    Cancion(int numero_track_usuario, std::string nombre_cancion_usuario, double duracion_cancion_usuario);
    double getDuracion();
    int         get_numero_track();
    std::string get_nombre_cancion();
    

    void set_numero_track(int valor);
    void set_nombre_cancion(std::string valor);
    void set_duracion_cancion(double valor);

};

