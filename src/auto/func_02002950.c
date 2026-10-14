#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0207f4d4;

s32 func_02002950(void) {
    return (s32) M2C_FIELD(&data_0207f4d4, u16 *, 0xE);
}
