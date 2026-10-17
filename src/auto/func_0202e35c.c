#include "m2c.h"

extern M2C_UNK data_02096634;

s32 func_0202e35c(void) {
    M2C_UNK *var_r2;
    s32 var_r0;

    var_r2 = &data_02096634;
    var_r0 = 0;
loop_1:
    if (M2C_FIELD(var_r2, s32 *, 0x40) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 = (M2C_UNK *) ((s8 *) var_r2 + 0x48);
    if (var_r0 >= 0x14) {
        return -1;
    }
    goto loop_1;
}
