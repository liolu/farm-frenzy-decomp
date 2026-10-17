#include "m2c.h"

M2C_UNK func_0200c5a4(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0200c5e8(M2C_UNK *, u16 *, M2C_UNK, M2C_UNK); /* extern */

u16 func_0201eea4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp2[514];
    u16 sp0;

    func_0200c5a4(sp2, 0xA001);
    sp0 = 0;
    func_0200c5e8(sp2, &sp0, arg0, arg1);
    return sp0;
}
