#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0207f590;

s32 func_02003fa8(void) {
    s32 temp_r0;

    temp_r0                                = M2C_FIELD(&data_0207f590, s32 *, 0x20) + 1;
    M2C_FIELD(&data_0207f590, s32 *, 0x20) = temp_r0;
    return temp_r0;
}
