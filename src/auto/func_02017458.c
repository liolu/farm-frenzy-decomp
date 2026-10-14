#include "engine.h"
#include "m2c.h"

void func_020060f0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02006660(M2C_UNK);
void func_0200681c(M2C_UNK);
M2C_UNK func_02006888(void);
void func_0200a6c8(M2C_UNK);
void func_0200a6e0(M2C_UNK);
void func_020174cc(M2C_UNK);

void func_02017458(s32 arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020060f0(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_0200a6c8(arg0 + 8);
        func_0200a6e0(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_02006888();
        func_02006660(1);
        func_0200681c(temp_r5);
    }
    func_020174cc(arg0);
}
