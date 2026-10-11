#include "m2c.h"

M2C_UNK func_02011f20(s32, M2C_UNK);                /* extern */
s32 func_0201ec14(M2C_UNK);                         /* extern */

s32 func_0201f3e8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0201ec14(arg1);
    func_02011f20(temp_r0, arg0);
    return temp_r0;
}
