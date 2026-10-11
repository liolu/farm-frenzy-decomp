#include "m2c.h"
#include "engine.h"

void func_02011fb8(M2C_UNK, M2C_UNK);
M2C_UNK func_0201ec14(M2C_UNK);

s32 func_0201f40c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0201ec14(arg1);
    func_02011fb8(temp_r0, arg0);
    return temp_r0;
}
