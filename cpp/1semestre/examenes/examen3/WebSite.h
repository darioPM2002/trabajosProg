#include <iostream>
#include "WebUser.h"
class WebSite
{
private:
    std::string sidetText;
    WebUser * ListaUsuarios;
    int usersCount;

public:
    WebSite();
    WebSite(std::string sidetText_user_default);
    void SignUpUser(WebUser added_webUser);
    void mostrarPantalla(WebUser login_webUser);
    bool userExist (WebUser login_webUser);
};
