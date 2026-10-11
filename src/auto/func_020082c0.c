#include "m2c.h"

M2C_UNK func_020073e0(void *, s32);                 /* extern */
s32 func_0200743c(void *, s32);                     /* extern */
s32 func_02008018(s32);                             /* extern */
M2C_UNK func_0200822c();                            /* extern */

s32 func_020082c0(void *arg0) {
    func_020073e0(arg0, func_0200743c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02008018(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0200822c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
