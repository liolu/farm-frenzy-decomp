#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020815ac;

s32 func_020098e4(void) {
    if (M2C_FIELD(&data_020815ac, s32 *, 0x1C) != 0) {
        return 0;
    }
    M2C_FIELD(&data_020815ac, s32 *, 0x1C) = 1;
    return 1;
}
