#include "m2c.h"

M2C_UNK func_020061fc(s32, M2C_UNK);                /* extern */

void func_02017428(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 > (s32) (M2C_FIELD(arg0, s32 *, 0x48) - 1)) {
        return;
    }
    func_020061fc(1 << M2C_FIELD((arg0 + arg1), u8 *, 0x4C), arg2);
}
