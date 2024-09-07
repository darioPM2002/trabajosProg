#include "Publicacion.h"
#include "Usuario.h"
#include <iostream>
#pragma once
class Moderador
{
private:
    Publicacion publicaciones[10];
    int contador;
    int maxPubli;
public:
    Moderador();
    void CrearPublicacion(Usuario user_p,std::string text, int likess);


};
