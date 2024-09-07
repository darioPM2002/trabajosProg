#include "WebUser.h"
#include "WebSite.h"

int main()
{
    WebSite miWebSite("*");
    WebUser carlos("carlos", "mi contraseña", "refular user");
    
    WebUser juan("juan", "mi contraseña", "refular user");
    
    WebUser pedro("pedro", "mi contraseña", "admin");
    WebUser maria("maria", "mi contraseña", "admin");

 

    miWebSite.SignUpUser(carlos);
    
    miWebSite.SignUpUser(pedro);
    
    miWebSite.SignUpUser(juan);
    std::cout << "-------------------------------" << std::endl;

    miWebSite.mostrarPantalla(juan);
    miWebSite.mostrarPantalla(pedro);
    miWebSite.mostrarPantalla(juan);
    miWebSite.mostrarPantalla(maria);
    

    return 0;
}
