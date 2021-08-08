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

