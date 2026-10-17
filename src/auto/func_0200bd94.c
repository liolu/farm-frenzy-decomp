#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_02003f40();                                /* extern */
extern M2C_UNK data_02081ec8;
extern M2C_UNK data_02081ecc;

void func_0200bd94(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_02081ecc, 0x05000001);
    M2C_FIELD(&data_02081ec8, s16 *, 6) = func_02003f40();
}
