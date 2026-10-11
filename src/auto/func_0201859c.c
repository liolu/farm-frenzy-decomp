#include "m2c.h"

M2C_UNK func_02004bf4(s32, s32);                    /* extern */
s32 func_02017f08();                                /* extern */
s32 func_02017f30(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
s32 func_020181c4(s32, s32, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_0201859c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0_2 = func_02017f08();
    if (temp_r0_2 == 0) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    temp_r0 = func_020181c4(arg4, temp_r0_2 + 0x20, arg1, arg2, arg3);
    if (temp_r0 == 0) {
        return 0;
    }
    if (temp_r0_2 != func_02017f30(arg0, temp_r0, temp_r0_2, 0)) {
        return 0;
    }
    func_02004bf4(temp_r0, temp_r0_2);
    return temp_r0;
}
