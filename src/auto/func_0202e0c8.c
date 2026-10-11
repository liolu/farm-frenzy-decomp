#include "m2c.h"
#include "engine.h"

void func_0201dd98(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02095d58;

void func_0202e0c8(void) {
    if (M2C_FIELD(&data_02095d58, s32 *, 0x80) == 2) {
        func_0201dd98((s32) (u16) (M2C_FIELD(&data_02095d58, s32 *, 0x6C) + 0xA), 0);
        return;
    }
    func_0201dd98((s32) (u16) (M2C_FIELD(&data_02095d58, s32 *, 0x6C) + 6), 0);
}
