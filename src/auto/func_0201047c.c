#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201047c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020104f4
    cmn ip, r3, lsl #0x1
    bhs L_02010508
L_02010490:
    orrs ip, r3, r1
    bmi L_020104c0
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_020104ac:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_020104c0:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_020104e0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_020104e0:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_020104f4:
    bne L_020104ac
    cmp r0, #0x0
    bhi L_020104ac
    cmn ip, r3, lsl #0x1
    blo L_02010490
L_02010508:
    bne L_020104ac
    cmp r2, #0x0
    bhi L_020104ac
    b L_02010490
}
// clang-format on
