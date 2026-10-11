#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02081570;

void func_020098b8(s32 arg0) {
    do {

    } while (M2C_FIELD(&data_02081570, volatile u16 *, 0x3A) & arg0);
}
