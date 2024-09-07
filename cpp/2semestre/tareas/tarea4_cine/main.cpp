#include "Asiento.h"
#include "Cliente.h"
#include "Date.h"
#include "Admin.h"
#include "Cine.h"
#include <iostream>

int main()
{   
    Cine cinepolis;
    cinepolis.printInfo();
    Cliente peter("Peter", 951273842, "peter@gmail.com", 32512);
    Cliente mark("Mark", 951273842, "mark@gmail.com", 32512);
    Cliente robert("Robert", 951273842, "robert@gmail.com", 32512);
    Cliente danny("Danny", 951273842, "danny@gmail.com", 32512);


    Admin rose(132, 1500.50, Date(1,2,2024),cinepolis );
    Admin mary(431, 1500.50, Date(1,2,2024),cinepolis );
    rose.reserNum(2, peter);
    rose.resertipo(1, mark); //0: sencillo, 1: reclinable, 2: VIP
  
    mary.reserNum(9, danny); 
    mary.resertipo(2, robert); //0: sencillo, 1: reclinable, 2: VIP
    cinepolis.printInfo();
    rose.cancelRe(9);
    cinepolis.printInfo();
  

    return 0;
}



