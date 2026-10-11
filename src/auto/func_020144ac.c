#include "m2c.h"

M2C_UNK func_02013ff4(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02014124(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_02014234();                                /* extern */

void func_020144ac(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg1 != 0) {
        func_02013ff4(func_02014234(), arg2, arg3);
        return;
    }
    func_02014124(arg0, arg2, arg3);
}
