#include <stdint.h>

/* ==== MEMORY ==== */
static uint16_t memory[UINT16_MAX];
/********************/

/* ==== REGISTERS ==== */
enum {
    R1 = 0,
    R2,
    R3,
    R4,
    R5,
    R6,
    R7,
    IP,	  /* Instruction Pointer */
    COND, /* Condition Flags */
    REGS_COUNT,
};
uint16_t registers[REGS_COUNT];
/***********************/

/* ==== INSTRUCTION SET ==== */
enum {
    OP_BR = 0, /* Branch */
    OP_ADD,    /* Add */
    OP_LD,     /* Load */
    OP_ST,     /* Store */
    OP_JSR,    /* Jump register */
    OP_AND,    /* Bitwise `and` */
    OP_LDR,    /* Load register */
    OP_STR,    /* Store register */
    OP_RTI,    /* Unused */
    OP_NOT,    /* Bitwise `not` */
    OP_LDI,    /* Load indirect */
    OP_STI,    /* Store indirect */
    OP_JMP,    /* Jump */
    OP_RES,    /* Reserved (unused) */
    OP_LEA,    /* Load effective address */
    OP_TRAP,   /* Execute trap */
};
/*****************************/

/* ==== CONDITION FLAGS ==== */
enum {
	FL_POS = (1 << 0), /* Positive */
	FL_ZRO = (1 << 1), /* Zero */
	FL_NEG = (1 << 2), /* Negetive */
};
/*****************************/

