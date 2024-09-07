#include "Date.h"
#include "ticket.h"
#include <iostream>
#include "persona.h"

class cliente
{
private:
    std::string correo;
    double saldo;
    Date fecha_compra;
    ticket ticket_cliente;
    persona persona_n;
   
public:
    cliente();
    cliente(std::string correo, double saldo, Date fecha_compra, ticket ticket_cliente, persona persona_n);

    std::string getTicket();
};

