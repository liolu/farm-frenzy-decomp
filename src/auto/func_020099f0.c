#include "engine.h"
#include "m2c.h"

void func_020099f0(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        *(M2C_UNK *) arg1 = arg0;
    }
}
