#include "m2c.h"
#include "engine.h"

M2C_UNK func_02011a08(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02011ba0(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r0 = func_02011a08(arg0 + 0x24, 0x10, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_r0, s32 *, 0) = arg1;
    M2C_FIELD(temp_r0, s32 *, 4) = temp_r4;
    M2C_FIELD(temp_r0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(temp_r0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
    return 1;
}
