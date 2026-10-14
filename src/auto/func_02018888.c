#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);
M2C_UNK func_02017c60(M2C_UNK);
M2C_UNK func_02018018(M2C_UNK);
void func_02018040(M2C_UNK, M2C_UNK);

void func_02018888(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_0200550c();
    temp_r4 = func_02017c60(arg1);
    if (arg0 == func_02018018(arg2)) {
        func_02018040(arg2, 0);
    }
    func_02017c60(temp_r4);
    func_02005520(temp_r5);
}
