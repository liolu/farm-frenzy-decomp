#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02093c44;

void func_0201e258(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02093c44 + (arg0 * 4))) = arg1;
}
