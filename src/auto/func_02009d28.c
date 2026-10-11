#include "m2c.h"

s32 func_02009ca4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020750bc)();
extern M2C_UNK func_020099f0;

s32 func_02009d28(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_02009ca4(arg0, arg1, arg2, &func_020099f0, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020750bc();
    return sp4;
}
