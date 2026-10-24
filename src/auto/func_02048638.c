/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020972c4;
extern M2C_UNK data_02097450;

void func_02048638(void) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if (*((M2C_UNK *) ((s8 *) &data_02097450 + (var_r2 * 8))) != 0) {
        var_r2 += 1;
        if (var_r2 < 0x3C) {
            goto loop_1;
        }
    }
    M2C_FIELD(&data_020972c4, s32 *, 0x1C) = (s32) (var_r2 - 1);
}
