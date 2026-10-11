#include "m2c.h"

s32 func_02011300(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020824d4;

M2C_UNK *func_02011368(M2C_UNK arg0) {
    M2C_UNK *var_r4;
    s32 temp_r0;

    var_r4 = &data_020824d4;
    temp_r0 = func_02011300(&data_020824d4, arg0);
    if (temp_r0 != 0) {
        var_r4 = temp_r0 + 0xC;
    }
    return var_r4;
}
