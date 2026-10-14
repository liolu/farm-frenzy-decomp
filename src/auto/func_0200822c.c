#include "engine.h"
#include "m2c.h"

void func_02004604(M2C_UNK);
M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);
M2C_UNK func_0200743c(M2C_UNK, M2C_UNK);
M2C_UNK func_02008018(M2C_UNK);

void func_0200822c(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r6;

    var_r6  = arg0;
    temp_r4 = M2C_FIELD(var_r6, volatile s32 *, 8);
    if (var_r6 == 0) {
        return;
    }
loop_3:
    temp_r5                                = func_0200550c();
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 0x40);
    if (M2C_FIELD(var_r6, volatile s32 *, 0xC) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_02004604(var_r6 + 0x18);
        func_02005520(temp_r5);
        return;
    }
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 8);
    func_02005520(temp_r5);
    if (func_0200743c(var_r6, M2C_FIELD(var_r6, volatile s32 *, 0x10)) == 6) {
        return;
    }
    var_r6 = func_02008018(temp_r4);
    if (var_r6 == 0) {
        return;
    }
    goto loop_3;
}
