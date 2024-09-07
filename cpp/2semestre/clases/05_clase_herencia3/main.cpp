#include "Gas.h"
#include "Electric.h"
#include "Garage.h"

int main()
{
    Gas g(50, "Audio m");
    Electric e(50, "Tesla");
    Garage garage(2);
    garage.setCar(2, g); 
    
    return 0;
}
