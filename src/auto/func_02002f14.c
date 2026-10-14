#include "engine.h"
#include "m2c.h"

void func_02005890(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02005c64(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0207509c;

void func_02002f14(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0207509c != -1) && ((u32) arg2 > 0x1CU)) {
        func_02005890(data_0207509c, arg0, arg1 + 0x05000000, arg2);
        return;
    }
    func_02005c64(arg0, arg1 + 0x05000000, arg2);
}
