#include "m2c.h"

M2C_UNK func_0201116c(void *, s32);                 /* extern */
s32 func_02011b40(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02018278();                            /* extern */

s32 func_020182bc(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02011b40(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02018278();
    func_0201116c(((s8 *)arg0 + 4), temp_r0);
    return 1;
}
