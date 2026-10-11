#include "m2c.h"
#include "engine.h"

M2C_UNK func_02013914(M2C_UNK);

void func_0201392c(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = (void *) func_02013914(arg0);
    M2C_FIELD(temp_r0, s32 *, 0x24) = -1;
    M2C_FIELD(temp_r0, s32 *, 0x28) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg2;
}
