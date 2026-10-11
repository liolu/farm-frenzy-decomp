#include "m2c.h"

M2C_UNK func_0201eb74(s32, s32, s32);               /* extern */
M2C_UNK func_0201ebfc(s32, s32, s32);               /* extern */
extern M2C_UNK data_02093dd4;

void func_0201ea90(s32 arg0, s32 arg1) {
    s32 var_r4;

    M2C_FIELD(&data_02093dd4, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_02093dd4, s32 *, 0x14) = arg1;
    var_r4 = 0;
    do {
        func_0201eb74(var_r4, arg0, arg1);
        func_0201ebfc(var_r4, arg0, arg1);
        var_r4 += 1;
    } while (var_r4 < 0x10);
}
