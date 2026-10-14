#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02093d58;

s32 func_0201e938(void) {
    return (s32) M2C_FIELD(&data_02093d58, u16 *, 0x1C);
}
