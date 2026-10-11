#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02010518(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02010580
    cmn ip, r3, lsl #0x1
    bhs L_02010594
L_0201052c:
    orrs ip, r3, r1
    bmi L_0201055c
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02010548:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0201055c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02010580:
    bne L_02010548
    cmp r0, #0x0
    bhi L_02010548
    cmn ip, r3, lsl #0x1
    blo L_0201052c
L_02010594:
    bne L_02010548
    cmp r2, #0x0
    bhi L_02010548
    b L_0201052c
}
// clang-format on
