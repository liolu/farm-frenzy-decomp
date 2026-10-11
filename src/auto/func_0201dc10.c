#include "m2c.h"

s32 func_02011dd8(s32, u16);                        /* extern */
M2C_UNK func_02013578(s32, s32);                    /* extern */

void func_0201dc10(void *arg0, s32 arg1, s32 arg2) {
    func_02013578((arg2 * 0x58) + (s32) (arg0 + 0x10), func_02011dd8(M2C_FIELD(arg0, s32 *, 8), (u16) (arg1 - 1)));
}
