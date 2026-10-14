#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02081570;

s32 func_02009598(void) {
    return (s32) M2C_FIELD(&data_02081570, u16 *, 0x10);
}
