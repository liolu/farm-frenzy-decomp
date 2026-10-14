#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02093c38;

void func_0201e428(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02093c38 + (arg0 * 4))) = arg1;
}
