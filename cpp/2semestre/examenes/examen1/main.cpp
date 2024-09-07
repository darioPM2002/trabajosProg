#include "InstrumentosMusicales.h"
#include "Trombon.h"
#include "Trompeta.h"
#include <iostream>

int main() {
    InstrumentosMusicales * instr;
    instr = new Trompeta(3500.00, "Metal", 3, 1000);
    instr->printInfo();
    delete instr;
    std::cout << "__________________" << std::endl;
    instr = new Trombon(6000.00, "Cobre", 0, 500);
    instr->printInfo();
    delete instr;

    return 0;
}