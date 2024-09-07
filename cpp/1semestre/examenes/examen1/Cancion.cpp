#include "Cancion.h"

Cancion::Cancion(){
    numero_track =0;
    nombre_cancion ="No name";
    duracion_cancion =0.0;

};
Cancion::Cancion(int numero_track_usuario, std::string nombre_cancion_usuario, double duracion_cancion_usuario){


    numero_track =numero_track_usuario;
    nombre_cancion =nombre_cancion_usuario;
    duracion_cancion =duracion_cancion_usuario;
};

double Cancion::getDuracion(){
return duracion_cancion;
};


  
    int         Cancion::get_numero_track()  {return numero_track;};
    std::string Cancion::get_nombre_cancion(){return nombre_cancion;};
    

    void Cancion::set_numero_track(int valor)           {numero_track =valor;};
    void Cancion::set_nombre_cancion(std::string valor) {nombre_cancion =valor;};
    void Cancion::set_duracion_cancion(double valor)    {duracion_cancion =valor;};