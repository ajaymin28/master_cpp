#include <iostream>
#include "common.h"

using namespace std;

//----------------------- Main -------------------------
int main() {
    // Init RAM and variables
    RAM ram;
    ram["a"] = 10; ram["b"] = 20; ram["c"] = 0;   // unordered map <str,int> key val pairs

    // Build cache hierarchy: L1 → L2 → L3 → RAM
    Cache l3("L3"), l2("L2"), l1("L1");
    l1.next_level = &l2;
    l2.next_level = &l3;
    l3.next_level = nullptr; // l3 doesn't forward to RAM, handled in fetch/write

    // Registers, MUX, ALU, Control Unit
    Registers reg;
    Multiplexer mux;
    ALU alu;
    ControlUnit cu;

    // Run the instruction sequence
    cu.execute(ram, l1, reg, mux, alu);

    return 0;
}