#include "m2c.h"

M2C_UNK func_02004a40(M2C_UNK *);                   /* extern */
M2C_UNK func_02004ac4(M2C_UNK *);                   /* extern */
M2C_UNK func_02017184(void *);                      /* extern */
M2C_UNK func_02019438(void *);                      /* extern */
extern M2C_UNK data_02086b30;
extern M2C_UNK data_020871a8;

void func_0201971c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x12C)) {
        return;
    }
    func_02004a40(&data_020871a8);
    if (M2C_FIELD(&data_02086b30, s32 *, 4) != 0) {
        func_02004a40(M2C_FIELD(&data_02086b30, s32 *, 4) + 0x4C8);
    }
    func_02019438(arg2);
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s32 *, 0x130) = 0;
    M2C_FIELD(arg2, s8 *, 0x124)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x120) > 0) {
        func_02017184(arg2);
        M2C_FIELD(arg2, s32 *, 0x120) = 0;
    }
    func_02004ac4(&data_020871a8);
    if (M2C_FIELD(&data_02086b30, s32 *, 4) == 0) {
        return;
    }
    func_02004ac4(M2C_FIELD(&data_02086b30, s32 *, 4) + 0x4C8);
}
