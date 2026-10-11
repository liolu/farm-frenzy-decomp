#include "m2c.h"

M2C_UNK func_0201d9d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0201dae0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02043b6c();                            /* extern */
M2C_UNK func_02044d44();                            /* extern */

void func_02043a90(void) {
    func_0201dae0(0x80000, 0x60000, 0, 1, 0, 0);
    func_02044d44();
    func_0201dae0(0x80000, 0x60000, 1, 1, 0, 0);
    func_0201d9d4(0x80000, 0x60000, 1, 1, 0);
    func_0201d9d4(0x80000, 0x60000, 0, 1, 0);
    func_0201d9d4(0x80000, 0x60000, 2, 1, 0);
    func_0201d9d4(0x80000, 0x60000, 3, 1, 0);
    func_0201d9d4(0x80000, 0x60000, 4, 2, 0);
    func_02043b6c();
}
