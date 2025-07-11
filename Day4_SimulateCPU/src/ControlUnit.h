#ifndef CONTROL_UNIT_H
#define CONTROL_UNIT_H

#include "common.h"
#include "RAM.h"
#include "Cache.h"
#include "Registers.h"
#include "Multiplexer.h"
#include "ALU.h"

//---------------- Control Unit--------------
class ControlUnit {
public:
    void execute(RAM& ram, Cache& l1, Registers& reg, Multiplexer& mux, ALU& alu) {
        // Fetch operands
        reg.R1 = l1.fetch("a", &ram);
        reg.R2 = l1.fetch("b", &ram);

        // MUX select
        auto [op1, op2] = mux.select(reg.R1, reg.R2);

        // ALU operation  data1, data2, OP_CODE
        reg.R3 = alu.execute(op1, op2, ALU_ADD);

        // Write back
        l1.write("c", reg.R3, &ram);

        reg.dump();

        // Fetch result to show read-back flow
        int result = l1.fetch("c", &ram);
        cout << "Final result (c): " << result << endl;
    }
};

#endif