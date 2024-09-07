#include "cliente.h"
class cinema
{
private:
int autos;
int clientes_cont;
cliente* clientes;
int boletos_contador_vip;

int boletos_contador_normal;

int boletos_contador_premiere;

public:
   
   cinema();
   cinema(int autos);
   void agregarClientes(cliente cliente_nuevo);
   void contarBoletos();

   
   int get_boletos_contador_vip();
   int get_boletos_contador_noraml();
   int get_boletos_contador_premiere();


};

