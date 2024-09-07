#include "cinema.h"
#include "Date.h"
#include "ticket.h"
#include "persona.h"



int main()
{
  cinema new_cine(10);

  ticket ticket_vip("vip");

  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket_vip, persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket_vip, persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("premiere"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("normal"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("vip"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("premiere"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("normal"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("vip"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("premiere"), persona(Date(16,11,1999), "Juan", "Perez")) );
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("normal"), persona(Date(16,11,1999), "Juan", "Perez")) );
 
  new_cine.agregarClientes(cliente("correo_ejemplo@correo.com",500.0,Date(16,11,2023), ticket("normal"), persona(Date(16,11,1999), "Juan", "Perez")) );

  std::cout << "hay estos boletos:" << std::endl;
  std::cout << "VIP: " << new_cine.get_boletos_contador_vip()<<std::endl;
  std::cout << "Premiere: " <<new_cine.get_boletos_contador_premiere()<< std::endl;
  std::cout << "Normal: " << new_cine.get_boletos_contador_noraml()<< std::endl;
  
  return 0;
}
