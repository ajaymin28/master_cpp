#ifndef ALU_H
#define ALU_H

#include "common.h"

static enum ALU_OPCODE {
    ALU_ADD = 0,
    ALU_SUB,
    ALU_MUL,
    ALU_DIV,
    ALU_MOD,
    ALU_INC,
    ALU_DEC,

    ALU_LOGICAL_AND,
    ALU_LOGICAL_OR,
    ALU_LOGICAL_NOT,

    ALU_BIT_AND,
    ALU_BIT_OR,
    ALU_BIT_XOR,
    ALU_BIT_NOT,
    ALU_SHL,
    ALU_SHR,

    ALU_EQ,
    ALU_NEQ,
    ALU_GT,
    ALU_LT,
    ALU_GTE,
    ALU_LTE
};

//-------------------- ALU ----------------------------
class ALU {
private:
    // Arithmetic Operations
    int alu_add(int x, int y);
    int alu_sub(int x, int y);
    int alu_mul(int x, int y);
    int alu_div(int x, int y);
    int alu_mod(int x, int y);
    int alu_inc(int x); // increment
    int alu_dec(int x); // decrement

    // Logical Operations
    int alu_logical_and(int x, int y);
    int alu_logical_or(int x, int y);
    int alu_logical_not(int x);

    // Bitwise Operations
    int alu_bit_and(int x, int y);
    int alu_bit_or(int x, int y);
    int alu_bit_xor(int x, int y);
    int alu_bit_not(int x);
    int alu_shl(int x, int shift); // left shift
    int alu_shr(int x, int shift); // right shift

    // Relational Operations
    int alu_eq(int x, int y);   // ==
    int alu_neq(int x, int y);  // !=
    int alu_gt(int x, int y);   // >
    int alu_lt(int x, int y);   // <
    int alu_gte(int x, int y);  // >=
    int alu_lte(int x, int y);  // <=

public:
    int execute(int x, int y, ALU_OPCODE opcode); // for binary operations
    int execute(int x, ALU_OPCODE opcode);        // for unary operations
};

#endif