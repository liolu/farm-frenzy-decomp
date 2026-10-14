#include "engine.h"
#include "m2c.h"

void func_0201ec90(M2C_UNK);
M2C_UNK func_0201f430(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02093bec;
extern M2C_UNK data_02093c30;

void func_0201e05c(s32 arg0) {
    if (M2C_FIELD(&data_02093bec, s32 *, 0x30) != 0) {
        func_0201ec90(M2C_FIELD(&data_02093bec, s32 *, 0x30));
    }
    M2C_FIELD(&data_02093bec, s32 *, 0x30) = func_0201f430((s32) &data_02093c30, arg0);
}
