
#include "WebSite.h"
WebSite::WebSite(/* args */)
{
    usersCount =0;
    sidetText ="*";
ListaUsuarios = new WebUser[10];

}

WebSite::WebSite(std::string sidetText_user_default)
{
 usersCount =0;   
 sidetText =sidetText_user_default;
 ListaUsuarios = new WebUser[10];

}


void WebSite::SignUpUser(WebUser added_webUser){

   
    
        if (usersCount <10)
        {
             
            ListaUsuarios[usersCount++]= added_webUser;
             std::cout << "El ususario " <<ListaUsuarios[usersCount-1].get_usrName() <<" se añadio correctamente "<< std::endl;
          
        }else
        {
            std::cout << "Error el ususario " <<added_webUser.get_usrName() <<" No se pudo añadir "<< std::endl;
            
        }
        

        
        
    
    


};


bool WebSite::userExist (WebUser login_webUser){

    for (int i  = 0; i < 10; i++)
    {
        if (ListaUsuarios[i].get_usrName() == login_webUser.get_usrName())
        {
          return true;
        }else
        {
            
        }
        
        
        
    }
    return false;
};

   void WebSite::mostrarPantalla(WebUser login_webUser){
//verificar si existe usuario 

    if (userExist(login_webUser))
    {
        
    std::string respuesta= "";
    std::string caracteres =sidetText+sidetText+sidetText+sidetText+sidetText+sidetText+sidetText+sidetText+sidetText+sidetText;
    std::cout << "Bienvenido "<< login_webUser.get_usrName()<<" al sitio web" << std::endl;
    if (login_webUser.get_usrType() =="admin")
    {
        std::cout << "Bienvenido administrador:  "<< login_webUser.get_usrName()<<" al sitio web" << std::endl;
        std::cout << "Quieres cambiar la pantalla? (Y/N)" << std::endl;
        std::cin>>respuesta;
         if (respuesta == "Y")
        {
      
            std::cout << "Bienvenido administrador, a continuación ingresa un caracter para cambiar la pantalla" << std::endl;

            std::cin>>sidetText;

            std::cout << "La pantalla se ha cambiado a: " << sidetText<< std::endl;
        
        
    }
        
    } else
        {
         for (int i = 0; i < 10; i++)
             {
             std::cout <<caracteres << std::endl;
             }
        
        }
    
    
    
    
        
    }else
    {
        std::cout << "Lo siento no existes en la base de datos" << std::endl;
    }
    
    

    
 
    
   };