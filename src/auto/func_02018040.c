#include "m2c.h"
#include "engine.h"

extern void *data_02086af0;

void func_02018040(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02086af0, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
