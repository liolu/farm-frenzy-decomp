#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);
M2C_UNK func_020098e4(void);
void func_0200a02c(M2C_UNK);

extern M2C_UNK data_020815ac;

s32 func_02009ca4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r5;

    temp_r5 = func_0200550c();
    if (func_020098e4() == 0) {
        func_02005520(temp_r5);
        return 1;
    }
    M2C_FIELD(&data_020815ac, s32 *, 0x20) = arg3;
    M2C_FIELD(&data_020815ac, s32 *, 0x24) = arg4;
    M2C_FIELD(&data_020815ac, s32 *, 0x28) = arg2;
    func_0200a02c((u8) arg0 | 0x02006100);
    func_0200a02c(0x01010000 | (u16) arg1);
    func_02005520(temp_r5);
    return 0;
}
