#include "ALU.h"



// Arithmetic Operations
int ALU::alu_add(int x, int y) {
    cout << "ALU add op " << x << " + " << y << endl;
    return x + y;
}
int ALU::alu_sub(int x, int y) {
    cout << "ALU sub op " << x << " - " << y << endl;
    return x - y;
}
int ALU::alu_mul(int x, int y) {
    cout << "ALU mul op " << x << " * " << y << endl;
    return x * y;
}
int ALU::alu_div(int x, int y) {
    cout << "ALU div op " << x << " / " << y << endl;
    if (y == 0) {
        cout << "Error: Divide by zero!" << endl;
        return 0;
    }
    return x / y;
}
int ALU::alu_mod(int x, int y) {
    cout << "ALU mod op " << x << " % " << y << endl;
    if (y == 0) {
        cout << "Error: Modulo by zero!" << endl;
        return 0;
    }
    return x % y;
}
int ALU::alu_inc(int x) {
    cout << "ALU inc op " << x << "++" << endl;
    return x + 1;
}
int ALU::alu_dec(int x) {
    cout << "ALU dec op " << x << "--" << endl;
    return x - 1;
}

// Logical Operations
int ALU::alu_logical_and(int x, int y) {
    cout << "ALU logical AND op " << x << " && " << y << endl;
    return x && y;
}
int ALU::alu_logical_or(int x, int y) {
    cout << "ALU logical OR op " << x << " || " << y << endl;
    return x || y;
}
int ALU::alu_logical_not(int x) {
    cout << "ALU logical NOT op !" << x << endl;
    return !x;
}

// Bitwise Operations
int ALU::alu_bit_and(int x, int y) {
    cout << "ALU bitwise AND op " << x << " & " << y << endl;
    return x & y;
}
int ALU::alu_bit_or(int x, int y) {
    cout << "ALU bitwise OR op " << x << " | " << y << endl;
    return x | y;
}
int ALU::alu_bit_xor(int x, int y) {
    cout << "ALU bitwise XOR op " << x << " ^ " << y << endl;
    return x ^ y;
}
int ALU::alu_bit_not(int x) {
    cout << "ALU bitwise NOT op ~" << x << endl;
    return ~x;
}
int ALU::alu_shl(int x, int shift) {
    cout << "ALU shift left op " << x << " << " << shift << endl;
    return x << shift;
}
int ALU::alu_shr(int x, int shift) {
    cout << "ALU shift right op " << x << " >> " << shift << endl;
    return x >> shift;
}

// Relational Operations
int ALU::alu_eq(int x, int y) {
    cout << "ALU equal to op " << x << " == " << y << endl;
    return x == y;
}
int ALU::alu_neq(int x, int y) {
    cout << "ALU not equal op " << x << " != " << y << endl;
    return x != y;
}
int ALU::alu_gt(int x, int y) {
    cout << "ALU greater than op " << x << " > " << y << endl;
    return x > y;
}
int ALU::alu_lt(int x, int y) {
    cout << "ALU less than op " << x << " < " << y << endl;
    return x < y;
}
int ALU::alu_gte(int x, int y) {
    cout << "ALU greater than or equal op " << x << " >= " << y << endl;
    return x >= y;
}
int ALU::alu_lte(int x, int y) {
    cout << "ALU less than or equal op " << x << " <= " << y << endl;
    return x <= y;
}

int ALU::execute(int x, int y, ALU_OPCODE opcode) {
    switch(opcode) {
        // Arithmetic
        case ALU_ADD:         return alu_add(x, y);
        case ALU_SUB:         return alu_sub(x, y);
        case ALU_MUL:         return alu_mul(x, y);
        case ALU_DIV:         return alu_div(x, y);
        case ALU_MOD:         return alu_mod(x, y);

        // Logical
        case ALU_LOGICAL_AND: return alu_logical_and(x, y);
        case ALU_LOGICAL_OR:  return alu_logical_or(x, y);

        // Bitwise
        case ALU_BIT_AND:     return alu_bit_and(x, y);
        case ALU_BIT_OR:      return alu_bit_or(x, y);
        case ALU_BIT_XOR:     return alu_bit_xor(x, y);
        case ALU_SHL:         return alu_shl(x, y); // y = shift count
        case ALU_SHR:         return alu_shr(x, y); // y = shift count

        // Relational
        case ALU_EQ:          return alu_eq(x, y);
        case ALU_NEQ:         return alu_neq(x, y);
        case ALU_GT:          return alu_gt(x, y);
        case ALU_LT:          return alu_lt(x, y);
        case ALU_GTE:         return alu_gte(x, y);
        case ALU_LTE:         return alu_lte(x, y);

        // These are generally unary, should use the unary overload.
        case ALU_INC:
        case ALU_DEC:
        case ALU_LOGICAL_NOT:
        case ALU_BIT_NOT:
            cout << "Use unary execute(x, opcode) for this operation!" << endl;
            return 0;

        default:
            cout << "Unknown or unsupported ALU opcode!" << endl;
            return 0;
    }
}

int ALU::execute(int x, ALU_OPCODE opcode) {
    switch(opcode) {
        case ALU_INC:          return alu_inc(x);
        case ALU_DEC:          return alu_dec(x);
        case ALU_LOGICAL_NOT:  return alu_logical_not(x);
        case ALU_BIT_NOT:      return alu_bit_not(x);
        default:
            cout << "Unknown or unsupported unary ALU opcode!" << endl;
            return 0;
    }
}