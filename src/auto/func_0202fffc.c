#include "m2c.h"

extern M2C_UNK data_02096bd4;

s32 func_0202fffc(void) {
    M2C_UNK *var_r2;
    s32 var_r0;

    var_r2 = &data_02096bd4;
    var_r0 = 0;
loop_1:
    if (M2C_FIELD(var_r2, s32 *, 0x30) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 = (M2C_UNK *) ((s8 *) var_r2 + 0x34);
    if (var_r0 >= 0x1E) {
        return -1;
    }
    goto loop_1;
}
