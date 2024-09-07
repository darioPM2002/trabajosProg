#include "Publicacion.h"

Publicacion::Publicacion()
{
    user = Usuario();
    likes = 0;
    text = "no text";
    
}

std::string Publicacion::getText()
{
    return text;
}

int Publicacion::getLikes()
{
    return likes;
}

Publicacion::Publicacion(Usuario userp, std::string textp, int likesUs)
{
    user = userp;
    likes = likesUs;
    text = textp;
    
}

