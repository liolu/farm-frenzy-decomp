#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02093c50;

void func_0201e248(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02093c50 + (arg0 * 4))) = arg1;
}
