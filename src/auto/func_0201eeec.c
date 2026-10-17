#include "m2c.h"

M2C_UNK func_0200c628(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0200c668(M2C_UNK *, s32 *, M2C_UNK, M2C_UNK); /* extern */

s32 func_0201eeec(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp4[1024];
    s32 sp0;

    func_0200c628(sp4, 0xEDB88320);
    sp0 = -1;
    func_0200c668(sp4, &sp0, arg0, arg1);
    return ~sp0;
}
