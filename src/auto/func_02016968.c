#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02085fbc;

void func_02016968(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02085fbc + (arg0 * 0x24))) = (s32) (u16) arg1;
}
