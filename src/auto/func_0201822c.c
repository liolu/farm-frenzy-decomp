#include "m2c.h"

s32 func_02011ba0(s32, u16);                        /* extern */
M2C_UNK func_02011bf0(s32, M2C_UNK);                /* extern */
s32 func_020182bc(void *);                          /* extern */

s32 func_0201822c(void *arg0) {
    if (func_02011ba0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_020182bc(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02011bf0(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
