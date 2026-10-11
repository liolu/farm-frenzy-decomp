#include "m2c.h"
#include "engine.h"

void func_02002fc0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02003018(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02003324(void);
void func_0200336c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020033d8(void);
void func_020034d8(void);
void func_020034f0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02003554(void);
void func_0200377c(void);
void func_020037b0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200381c(void);
void func_02004c10(M2C_UNK, M2C_UNK);
void func_02012e48(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020132b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    func_02004c10(temp_r4, temp_r5);
    switch (arg2) {                                 /* irregular */
    case 1:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_02003324();
            func_0200336c(temp_r4, arg1, temp_r5);
            func_020033d8();
        } else {
            func_02002fc0(temp_r4, arg1, temp_r5);
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_020034d8();
            func_020034f0(temp_r4, arg1, temp_r5);
            func_02003554();
        } else {
            func_02003018(temp_r4, arg1, temp_r5);
        }
        break;
    case 0:
        func_0200377c();
        func_020037b0(temp_r4, arg1, temp_r5);
        func_0200381c();
        break;
    }
    M2C_FIELD(arg3, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg3, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    func_02012e48(arg3, arg2, arg1);
}
