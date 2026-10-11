#include "m2c.h"

s32 func_02009e04(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020750bc)();
extern M2C_UNK func_020099f0;

s32 func_02009e8c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02009e04(arg0, arg1, &func_020099f0, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020750bc();
    return sp0;
}
