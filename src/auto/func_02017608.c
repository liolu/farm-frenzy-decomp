#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);
void func_020060c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201750c(M2C_UNK, M2C_UNK);

void func_02017608(s32 arg0) {
    s32 temp_r6;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = func_0200550c();
            func_0201750c(arg0, 1);
            func_02005520(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    func_020060c8(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
