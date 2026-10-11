#include "m2c.h"
#include "engine.h"

M2C_UNK func_02003bac(M2C_UNK);

extern M2C_UNK data_0207f8d4;

void func_020054b0(void) {
    if (M2C_FIELD(&data_0207f8d4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0207f8d4, u16 *, 0) = 1U;
    M2C_FIELD(&data_0207f8d4, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0207f8d4, s32 *, 0x10) = 0;
    func_02003bac(4);
    M2C_FIELD(&data_0207f8d4, s32 *, 8) = 0;
    M2C_FIELD(&data_0207f8d4, s32 *, 4) = 0;
}
