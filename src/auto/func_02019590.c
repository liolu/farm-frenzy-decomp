#include "m2c.h"

M2C_UNK func_020043a8(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_0200466c(void *);                      /* extern */
M2C_UNK func_02004a28(void *);                      /* extern */
M2C_UNK func_02011128(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_0201a3f4;

void func_02019590(void *arg0, s32 arg1) {
    func_020043a8(arg0, &func_0201a3f4, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_02011128(arg0 + 0x4E0, 0);
    func_02004a28(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_0200466c(arg0);
}
