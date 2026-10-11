#include "m2c.h"

s32 func_02017c78();                                /* extern */
s32 func_02018018();                                /* extern */
M2C_UNK func_02018040(M2C_UNK, s32);                /* extern */
s32 func_0201859c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02018938;

s32 func_02018714(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02018018();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02017c78();
        }
        var_r4 = func_0201859c(arg0, &func_02018938, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02018040(arg0, var_r4);
        }
    }
    return var_r4;
}
