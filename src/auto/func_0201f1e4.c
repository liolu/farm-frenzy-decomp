#include "engine.h"
#include "m2c.h"

extern s32 data_02075db8;
extern M2C_UNK data_02093fa4;

void func_0201f1e4(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_02093fa4, s32 *, 4)    = arg0;
    data_02075db8                          = arg1;
    M2C_FIELD(&data_02093fa4, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_02093fa4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02093fa4, s32 *, 0x1C) = 2;
}
