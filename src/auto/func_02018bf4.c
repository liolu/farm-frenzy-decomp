#include "m2c.h"

s32 *func_02017c88(s32);                            /* extern */
s32 func_02018018(s32);                             /* extern */
s32 func_02018c74(M2C_UNK, u8, u16, u8, void *, s32, s32, s32); /* extern */
void *func_0201a444(s32, s32);                      /* extern */

s32 func_02018bf4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 *temp_r0_3;
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_3 = func_02017c88(arg1);
    if (temp_r0_3 == NULL) {
        return 0;
    }
    temp_r0_2 = func_02018018(*temp_r0_3);
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_0201a444(temp_r0_2, arg2);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_02018c74(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                         temp_r0_2, arg1, arg2);
}
