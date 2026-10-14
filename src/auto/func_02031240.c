#include "engine.h"
#include "m2c.h"

void func_0201dd30(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02095d58;

void func_02031240(s32 arg0) {
    M2C_FIELD(&data_02095d58, s32 *, 0xA0) = 1;
    M2C_FIELD(&data_02095d58, s32 *, 0xA4) = arg0;
    M2C_FIELD(&data_02095d58, s32 *, 0xB8) = 0;
    M2C_FIELD(&data_02095d58, s32 *, 0xA8) = 0x80000;
    M2C_FIELD(&data_02095d58, s32 *, 0xAC) = 0x60000;
    M2C_FIELD(&data_02095d58, s32 *, 0xB0) = 0x80000;
    M2C_FIELD(&data_02095d58, s32 *, 0xB4) = 0x60000;
    func_0201dd30(0xAC, 0x44);
}
