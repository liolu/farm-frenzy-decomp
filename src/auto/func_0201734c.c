#include "m2c.h"
#include "engine.h"

void func_020060c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200a698(M2C_UNK);
void func_0200a6b0(M2C_UNK);

void func_0201734c(s32 arg0) {
    func_020060c8(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        return;
    }
    func_0200a698(arg0 + 8);
    func_0200a6b0(arg0 + 0x14);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 2);
}
