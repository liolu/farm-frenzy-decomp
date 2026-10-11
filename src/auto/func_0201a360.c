#include "m2c.h"

M2C_UNK func_02008c94(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02008ca4(void *, s32, M2C_UNK);        /* extern */

void func_0201a360(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_02008ca4(arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0xA4) + arg3, 0);
    func_02008c94(arg0 + 0x5C, arg1, arg2);
}
