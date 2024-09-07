#include <iostream>

class personaClass
{
private:
std::string name;
std::string aPaterno;
std::string aMaterno;
std::string direccion;
std::string telefono;
std::string curp;
std::string rfc;  
public:

//getters

std::string getname     ();
std::string getaPaterno ();
std::string getaMaterno ();
std::string getdireccion();
std::string gettelefono ();
std::string getcurp     ();
std::string getrfc      (); 

//setters
void setname     (std::string valor);
void setaPaterno (std::string valor);
void setaMaterno (std::string valor);
void setdireccion(std::string valor);
void settelefono (std::string valor);
void setcurp     (std::string valor);
void setrfc      (std::string valor); 
   
};

