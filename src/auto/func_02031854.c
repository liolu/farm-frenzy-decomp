#include "m2c.h"
#include "engine.h"

void func_0201dd30(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02055e80;
extern s32 data_0207f4a8;
extern M2C_UNK data_02095d58;

void func_02031854(s32 arg0) {
    if ((*((M2C_UNK *)((s8 *)&data_02055e80 + (M2C_FIELD(&data_02095d58, s32 *, 0x18) * 0x14))) == -1) && (data_0207f4a8 == 9)) {
        M2C_FIELD(&data_02095d58, s32 *, 0x84) = 0;
    } else {
        M2C_FIELD(&data_02095d58, s32 *, 0x84) = 1;
    }
    M2C_FIELD(&data_02095d58, s32 *, 0x88) = arg0;
    M2C_FIELD(&data_02095d58, s32 *, 0x9C) = 0;
    M2C_FIELD(&data_02095d58, s32 *, 0x8C) = 0x80000;
    M2C_FIELD(&data_02095d58, s32 *, 0x90) = 0x60000;
    M2C_FIELD(&data_02095d58, s32 *, 0x94) = 0x80000;
    M2C_FIELD(&data_02095d58, s32 *, 0x98) = 0x60000;
    func_0201dd30((s32) (u16) (M2C_FIELD(&data_02095d58, s32 *, 0x84) + 0xAF), 0x45);
}
