#include "personaClass.h"


//getter


std::string personaClass::getname(){

    return name ;
}



std::string personaClass::getaPaterno(){

    return aPaterno ;
}



std::string personaClass::getaMaterno(){

    return aMaterno;
}



std::string personaClass::getdireccion(){

    return direccion;
}



std::string personaClass::gettelefono(){

    return telefono;
}


std::string personaClass::getcurp(){

    return curp;
}


std::string personaClass::getrfc(){

    return rfc;
}


//setters
void personaClass::setname     (std::string valor){
    name=valor;
};
void personaClass::setaPaterno (std::string valor){
    aPaterno=valor;
};
void personaClass::setaMaterno (std::string valor){
    aMaterno=valor;
};
void personaClass::setdireccion(std::string valor){
   direccion =valor;
};
void personaClass::settelefono (std::string valor){
    telefono=valor;
};
void personaClass::setcurp     (std::string valor){
    curp=valor;
};
void personaClass::setrfc      (std::string valor){
    rfc=valor;
}; 