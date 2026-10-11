#include "m2c.h"

M2C_UNK func_02005df4(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_02007fe0(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    func_02005df4(arg1, M2C_FIELD(arg0, s32 *, 0x28) + arg2, arg3);
    return 0;
}
