#include "engine.h"
#include "m2c.h"

void func_02011274(M2C_UNK, M2C_UNK);
M2C_UNK func_020112d4(M2C_UNK, M2C_UNK);
void func_02018108(M2C_UNK);

extern M2C_UNK data_02085fa4;

s32 func_02016df8(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = (arg0 * 0x24) + (s32) &data_02085fa4;
    temp_r0 = func_020112d4(temp_r5 + 0xC, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02011274(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg1, s32 *, 8)      = temp_r0;
    func_02018108(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}
