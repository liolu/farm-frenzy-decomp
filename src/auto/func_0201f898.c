#include "m2c.h"

M2C_UNK func_0201da58(s32, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_0201dae0(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02095914;

void func_0201f898(void) {
    func_0201dae0(((M2C_FIELD(&data_02095914, s32 *, 4) * 0x10) + 0x80) << 0xC, 0x60000, 0, 1, 0, 0);
    if (M2C_FIELD(&data_02095914, s32 *, 8) == 4) {
        if (M2C_FIELD(&data_02095914, s32 *, 0x14) == 0) {
            func_0201da58(0x80000, 0x60000, 1, 1, 0, 0);
        } else {
            func_0201da58(0x80000, 0x60000, 2, 1, 0, 0);
        }
    } else if (M2C_FIELD(&data_02095914, s32 *, 8) != 5) {
        func_0201da58(((M2C_FIELD(&data_02095914, s32 *, 0xC) * 0x18) + 0x16) << 0xC,
                      ((M2C_FIELD(&data_02095914, s32 *, 8) * 0x18) + 0x16) << 0xC, 0, 1, 0, 0);
    }
    func_0201da58(0x80000, 0x60000, 3, 1, 0, 0);
    if (M2C_FIELD(&data_02095914, s32 *, 0x10) != 1) {
        return;
    }
    func_0201da58(0x80000, 0x60000, 4, 1, 0, 0);
}
