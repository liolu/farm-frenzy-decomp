#include "m2c.h"

s32 func_0201d56c(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    s16 temp_ip;
    s16 temp_lr_2;
    s16 temp_r3;
    s16 temp_r4_2;
    s32 temp_r4;
    void *temp_lr;
    void *temp_r0;

    temp_r4   = arg3 * 0x58;
    temp_lr   = arg0 + 0x4C + temp_r4;
    temp_r0   = M2C_FIELD((arg0 + temp_r4), void **, 0x40);
    temp_r3   = M2C_FIELD(arg2, s16 *, 0) + M2C_FIELD(temp_lr, s16 *, 0xC);
    temp_r4_2 = M2C_FIELD(arg2, s16 *, 2) + M2C_FIELD(temp_lr, s16 *, 0xE);
    temp_lr_2 = M2C_FIELD(arg1, s16 *, 0);
    if (((s32) (M2C_FIELD(temp_r0, s16 *, 8) + temp_r3) >= (s32) temp_lr_2) &&
        ((s32) (M2C_FIELD(temp_r0, s16 *, 0xC) + temp_r3) <= (s32) temp_lr_2)) {
        temp_ip = M2C_FIELD(arg1, s16 *, 2);
        if (((s32) (M2C_FIELD(temp_r0, s16 *, 0xA) + temp_r4_2) >= (s32) temp_ip) &&
            ((s32) (M2C_FIELD(temp_r0, s16 *, 0xE) + temp_r4_2) <= (s32) temp_ip)) {
            return 1;
        }
    }
    return 0;
}
