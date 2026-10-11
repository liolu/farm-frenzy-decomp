#include "m2c.h"
#include "engine.h"

void func_02005820(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02005cb4(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0207509c;

void func_020030c4(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0207509c != -1) && ((u32) arg2 > 0x30U)) {
        func_02005820(data_0207509c, arg0, arg1 + 0x07000400, arg2);
        return;
    }
    func_02005cb4(arg0, arg1 + 0x07000400, arg2);
}
