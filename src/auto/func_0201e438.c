#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02093c5c;

void func_0201e438(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02093c5c + (arg0 * 4))) = arg1;
}
