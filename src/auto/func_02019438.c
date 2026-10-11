#include "m2c.h"

M2C_UNK func_02004a40(M2C_UNK *);                   /* extern */
M2C_UNK func_02004ac4(M2C_UNK *);                   /* extern */
M2C_UNK func_020173a0(void *);                      /* extern */
M2C_UNK func_020194d0(void *);                      /* extern */
extern M2C_UNK data_02086b30;
extern M2C_UNK data_020871a8;

void func_02019438(void *arg0) {
    func_02004a40(&data_020871a8);
    if (M2C_FIELD(&data_02086b30, s32 *, 4) != 0) {
        func_02004a40(M2C_FIELD(&data_02086b30, s32 *, 4) + 0x4C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) != 0) {
        func_020173a0(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x170)(arg0);
    }
    func_020194d0(arg0);
    func_02004ac4(&data_020871a8);
    if (M2C_FIELD(&data_02086b30, s32 *, 4) == 0) {
        return;
    }
    func_02004ac4(M2C_FIELD(&data_02086b30, s32 *, 4) + 0x4C8);
}
