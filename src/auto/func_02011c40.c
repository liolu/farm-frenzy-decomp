#include "m2c.h"

M2C_UNK func_02011c88(s32);                         /* extern */
s32 func_02011fec(M2C_UNK, s32);                    /* extern */

s32 func_02011c40(M2C_UNK arg0, s32 *arg1) {
    s32 temp_r0;

    temp_r0 = func_02011fec(arg0, 0x41424E4B);
    if (temp_r0 == 0) {
        *arg1 = 0;
        return 0;
    }
    func_02011c88(temp_r0 + 8);
    *arg1 = temp_r0 + 8;
    return 1;
}
