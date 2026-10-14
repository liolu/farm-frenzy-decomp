#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020834a4;

s32 func_02013914(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_020834a4, s32 *, 8);
}
