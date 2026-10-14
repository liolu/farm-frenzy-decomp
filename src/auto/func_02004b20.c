#include "engine.h"
#include "m2c.h"

M2C_UNK func_020040c0(M2C_UNK);
void func_02004604(M2C_UNK);

void func_02004b20(s32 arg0) {
    void *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x88) == 0) {
        return;
    }
    do {
        temp_r0                        = (void *) func_020040c0(arg0 + 0x88);
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0;
        func_02004604((s32) temp_r0);
    } while (M2C_FIELD(arg0, s32 *, 0x88) != 0);
}
