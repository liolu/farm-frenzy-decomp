#include "m2c.h"
#include "engine.h"

void func_02011274(M2C_UNK, M2C_UNK);
void func_020180f0(M2C_UNK);

extern M2C_UNK data_02085fa4;

void func_0201705c(s32 arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        return;
    }
    func_020180f0(temp_r0);
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_02011274((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_02085fa4 + 0xC, arg0);
}
