#include "engine.h"
#include "m2c.h"

extern s32 data_02086af0;

s32 func_02017c60(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02086af0;
    data_02086af0 = arg0;
    return temp_r2;
}
