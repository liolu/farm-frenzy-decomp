#include "m2c.h"
#include "engine.h"

void func_020060f0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02006660(M2C_UNK);
void func_0200681c(M2C_UNK);
M2C_UNK func_02006888(void);

void func_020175bc(s32 arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020060f0(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_02006888();
    func_02006660(1);
    func_0200681c(temp_r4);
}
