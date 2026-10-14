#include "engine.h"
#include "m2c.h"

void func_02012e48(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 8) = arg2;
}
