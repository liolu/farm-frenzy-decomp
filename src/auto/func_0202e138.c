#include "m2c.h"

extern M2C_UNK data_020960e0;

s32 func_0202e138(void) {
    M2C_UNK *var_r2;
    s32 var_r0;

    var_r2 = &data_020960e0;
    var_r0 = 0;
loop_1:
    if (M2C_FIELD(var_r2, s32 *, 0x10) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 = (M2C_UNK *) ((s8 *) var_r2 + 0x14);
    if (var_r0 >= 0xF) {
        return -1;
    }
    goto loop_1;
}
