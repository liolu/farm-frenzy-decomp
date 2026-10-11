#include "m2c.h"
#include "engine.h"

void func_020062a8(M2C_UNK, M2C_UNK);
void func_02007054(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02007088(M2C_UNK, M2C_UNK);

void func_02018988(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == func_02007088(arg2, arg3)) {
        func_02007054(arg2, arg3, 0);
    }
    func_020062a8(arg0, arg0 + arg1);
}
