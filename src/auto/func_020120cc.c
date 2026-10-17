#include "m2c.h"

M2C_UNK func_02002ae8(M2C_UNK *);                   /* extern */
M2C_UNK func_0201207c(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020120cc(M2C_UNK arg0) {
    u8 sp4[48];

    func_0201207c(sp4, arg0, 0, 0, 0);
    func_02002ae8(sp4);
}
