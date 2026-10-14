#include "m2c.h"

M2C_UNK func_020045b4(M2C_UNK);                     /* extern */
M2C_UNK func_02004bd8(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_02004c10(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_02004c34();                            /* extern */
s32 func_0200550c();                                /* extern */
M2C_UNK func_02005520(s32);                         /* extern */
M2C_UNK func_0200557c(M2C_UNK);                     /* extern */
s32 func_0200721c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02007240(M2C_UNK, s32 *, M2C_UNK);         /* extern */

s32 func_0200ba64(void *arg0, s32 *arg1, s32 arg2) {
    s32 sp0;
    s32 *temp_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r8_2;

    sp0 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_0200721c(0xB, 1) == 0) {
            do {
                func_0200557c(0x64);
            } while (func_0200721c(0xB, 1) == 0);
        }
        func_0200ba64(arg0, NULL, 1);
    }
    func_02004c10(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_02004c34();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_02007240(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r8 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_02007240(0xB, temp_r8, 1) < 0);
    }
    temp_r8_2 = func_0200550c();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_020045b4(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_02005520(temp_r8_2);
    func_02004bd8(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r1 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 == 4) {
        temp_r0 = sp0 - 1;
        sp0     = temp_r0;
        if (temp_r0 > 0) {
            goto loop_6;
        }
    }
    if (temp_r1 == 0) {
        return 1;
    }
    return 0;
}
