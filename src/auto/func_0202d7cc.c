#include "engine.h"
#include "m2c.h"

void func_0201dd98(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02095d58;

void func_0202d7cc(s32 arg0) {
    M2C_FIELD(&data_02095d58, s32 *, 0x6C) = 1;
    M2C_FIELD(&data_02095d58, s32 *, 0x70) = arg0;
    M2C_FIELD(&data_02095d58, s32 *, 0x74) = 0x64;
    M2C_FIELD(&data_02095d58, s32 *, 0x80) = 0;
    func_0201dd98(7, 0);
}
