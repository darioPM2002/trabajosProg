#include "persona.h"
int main(){

    persona mary("mary", 0,0);
    persona juan("juan", 0,0);
    persona pedro("pedro", &juan,0);
    persona miguel("miguel", &pedro,0);
    persona joseph("joseph", &miguel,0);
    persona jesus("jesus", &mary,&joseph);

    return 0;
}
