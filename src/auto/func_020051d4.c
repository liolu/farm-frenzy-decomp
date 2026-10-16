
extern void func_020051e8();
extern void func_02005278();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020051d4(void) {
    stmfd sp!, {r0, lr}
    bl func_020051e8
    bl func_02005278
    ldmfd sp!, {r0, lr}
    bx lr
}
