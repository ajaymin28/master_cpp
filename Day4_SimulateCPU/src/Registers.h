#ifndef REGISTERS_H
#define REGISTERS_H


#include "common.h"

//------------------- Registers ------------------------
struct Registers {
    int R1 = 0, R2 = 0, R3 = 0;
    void dump();
};

#endif