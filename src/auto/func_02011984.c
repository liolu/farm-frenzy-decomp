#include "m2c.h"

M2C_UNK func_02011424(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02011450(s32, s32);                    /* extern */
M2C_UNK func_0201182c(s32, M2C_UNK *);              /* extern */

void func_02011984(s32 arg0, s32 arg1) {
    u8 sp0[8];
    s32 temp_r4;

    temp_r4 = arg1 - 0x10;
    func_02011424(sp0, temp_r4);
    func_02011450(arg0 + 0x2C, temp_r4);
    func_0201182c(arg0 + 0x24, sp0);
}
