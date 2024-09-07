#include "Moderador.h"

Moderador::Moderador()
{
contador = 0;
maxPubli = 10;
}

 void Moderador::CrearPublicacion(Usuario user_p, std::string text, int likesUs)
{
    if (contador < maxPubli)
    {
        Publicacion publiLocal(user_p, text, likesUs);
        publicaciones[contador]=publiLocal;
        contador++;
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Publicacion cread por: " + user_p.getNombre()   << std::endl;
        std::cout << "Texto: " + publiLocal.getText()   << std::endl;
        std::cout << "Numero de likes: "    << std::endl;
        std::cout << publiLocal.getLikes() << std::endl;
        std::cout << "_____________________________________________" << std::endl;
    }
    

}
