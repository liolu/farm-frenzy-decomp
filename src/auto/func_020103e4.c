#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020103e4(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02010458
    cmn ip, r3, lsl #0x1
    bhs L_0201046c
L_020103f8:
    orrs ip, r3, r1
    bmi L_02010428
    cmp r1, r3
    cmpeq r0, r2
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02010414:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02010428:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movhi r0, #0x1
    movls r0, #0x0
    bx lr
L_02010458:
    bne L_02010414
    cmp r0, #0x0
    bhi L_02010414
    cmn ip, r3, lsl #0x1
    blo L_020103f8
L_0201046c:
    bne L_02010414
    cmp r2, #0x0
    bhi L_02010414
    b L_020103f8
}
// clang-format on
