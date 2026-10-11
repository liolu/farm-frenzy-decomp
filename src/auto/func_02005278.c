#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200509c();
extern void func_020050ac();
extern char data_0207f814[];
extern char data_0207f818[];
extern char data_0207f81c[];
extern char data_0207f840[];
// clang-format off
asm void func_02005278(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0207f814
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_0200509c
    ldr r0, =data_0207f840
    ldr r1, =data_0207f818
    ldr r1, [r1, #0x0]
    ldr ip, =data_0207f81c
    ldr ip, [ip, #0x0]
    ldr lr, =0x20052c8
    bx ip
    bl func_020050ac
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
