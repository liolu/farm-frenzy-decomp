#include "m2c.h"
#include "engine.h"

void func_02016898(M2C_UNK);

void func_02017184(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r0 == 0) {
        return;
    }
    func_02016898(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
