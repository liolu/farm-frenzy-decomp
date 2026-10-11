#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02085fc0;

void func_02016988(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02085fc0 + (arg0 * 0x24))) = arg1;
}
