#include "m2c.h"
#include "engine.h"

s32 func_02011e5c(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if ((u32) arg1 >= (u32) M2C_FIELD(arg0, u16 *, 0)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (M2C_FIELD(arg0, u16 *, 2) & 1) {
        return temp_r0 + (arg1 * 0x10);
    }
    return temp_r0 + (arg1 * 8);
}
