#include "m2c.h"

M2C_UNK func_02011c7c(s32, M2C_UNK);                /* extern */
s32 func_0201ec14(M2C_UNK);                         /* extern */

s32 func_0201f37c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_0201ec14(arg1);
    func_02011c7c(temp_r0, arg0);
    return temp_r0;
}
