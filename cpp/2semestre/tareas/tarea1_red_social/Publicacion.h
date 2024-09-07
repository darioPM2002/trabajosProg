#include <iostream>
#include "Usuario.h"
#pragma once
class Publicacion
{
private:
    Usuario user;
    int likes;
    std::string text;
public:
    Publicacion();
    Publicacion(Usuario userp, std::string text, int likesu);
    std::string getText();
    int getLikes(); 
};

