#include "m2c.h"
#include "engine.h"

void func_02011128(M2C_UNK, M2C_UNK);
M2C_UNK func_020182bc(M2C_UNK);

s32 func_02018288(s32 arg0, s32 arg1) {
    func_02011128(arg0 + 4, 0xC);
    *(M2C_UNK *)arg0 = arg1;
    if (func_020182bc(arg0) != 0) {
        return 1;
    }
    return 0;
}
