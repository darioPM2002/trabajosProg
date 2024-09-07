#include"Person.h"
#include"Date.h"
#include"Invoice.h"
#include"Product.h"
using namespace std;

int main()
{
    
    Person person("Pedrito", "Garza",Date(14,1,1980) );
     
    Date d(18,2,2002);

    Person juanito("Juanito", "Perez", d);

    Invoice factura("OXXO", 1,5);
    Product producto("Papitas", 19.50, Date(1,12,2023));
    factura.addProduct(Product ("Cacahuates", 19.50, Date(1,12,2023)));
    
    factura.addProduct(Product ("Pistaches", 13.50, Date(1,12,2023)));
    
    factura.addProduct(Product ("Ahuacate", 18.50, Date(1,12,2023)));
    
    factura.addProduct(Product ("apio", 9.50, Date(1,12,2023)));
    
    factura.addProduct(Product ("salsa", 65.50, Date(1,12,2023)));

    factura.setCliente(juanito);

    factura.printInvoidValue();
}