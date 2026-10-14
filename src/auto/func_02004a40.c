#include "engine.h"
#include "m2c.h"

void func_020045b4(M2C_UNK);
void func_02004b5c(M2C_UNK, M2C_UNK);
M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);

extern M2C_UNK data_0207f5b4;

void func_02004a40(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = func_0200550c();
    temp_r7 = M2C_FIELD(&data_0207f5b4, s32 *, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 8)   = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_02004b5c(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, s32 *, 0x84) = arg0;
        func_020045b4(arg0);
        M2C_FIELD(temp_r7, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_02005520(temp_r4);
}
