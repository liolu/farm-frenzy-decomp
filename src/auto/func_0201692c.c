#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02085b40;

void func_0201692c(s32 arg0) {
    M2C_FIELD(&data_02085b40, s32 *, 4) = (s32) (M2C_FIELD(&data_02085b40, s32 *, 4) & ~(1 << arg0));
}
