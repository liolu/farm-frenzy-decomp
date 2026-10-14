#include "engine.h"
#include "m2c.h"

void func_02006008(M2C_UNK);
void func_02006070(M2C_UNK, M2C_UNK);
void func_02016fd8(M2C_UNK);

void func_02016f38(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02006070((s32) M2C_FIELD(arg0, u8 *, 0x3C), -0x2D3);
    }
    func_02006008((s32) M2C_FIELD(arg0, u8 *, 0x3C));
    func_02016fd8(arg0);
}
