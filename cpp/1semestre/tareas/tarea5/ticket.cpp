 #include "ticket.h"
 #include <iostream>
 ticket::ticket(){
    tipo_boleto="normal";
    precio=100;
 }
 ticket::ticket(std::string tipo_boleto_user){
    if (tipo_boleto_user=="normal")
    {
       tipo_boleto="normal";
       precio=100;
    }
    else if (tipo_boleto_user=="premiere")
    {
  
    tipo_boleto="premiere";
    precio=150;
    }
     else if (tipo_boleto_user=="vip")
    {
       
    tipo_boleto="vip";
    precio=200;
    }

    else{
    tipo_boleto="normal";
    precio=100; 
    }
 };

    std::string ticket::get_tipo_boleto(){
      return tipo_boleto;
    };