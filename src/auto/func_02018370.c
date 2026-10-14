#include "engine.h"
#include "m2c.h"

M2C_UNK func_02017c88(void);
M2C_UNK func_02018018(M2C_UNK);
M2C_UNK func_0201863c(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02018370(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;

    temp_r0 = func_02017c88();
    if (temp_r0 == 0) {
        return 3;
    }
    temp_r0_2 = *(M2C_UNK *) temp_r0;
    if (arg1 & 8) {
        var_r0 = func_0201863c(temp_r0_2, arg2, arg3);
        if (var_r0 == 0) {
            return 7;
        }
        goto block_6;
    }
    var_r0 = func_02018018(temp_r0_2);
block_6:
    if (arg4 != NULL) {
        *arg4 = var_r0;
    }
    return 0;
}
