#include "cliente.h"

cliente::cliente(){
    correo="no corrreo";
    saldo = 0.0;
    fecha_compra = Date();
    ticket_cliente = ticket();
    persona_n =persona();
}

cliente::cliente(std::string correo, double saldo, Date fecha_compra, ticket ticket_cliente_user,persona persona_n ){
 correo=correo;
    saldo = saldo;
    fecha_compra = fecha_compra;
    ticket_cliente = ticket_cliente_user;
    persona_n =persona_n;
};

  std::string cliente::getTicket(){
    return ticket_cliente.get_tipo_boleto();
  };

