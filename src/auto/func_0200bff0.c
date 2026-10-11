#include "m2c.h"

M2C_UNK func_02003e74();                            /* extern */
M2C_UNK func_02005520(s32);                         /* extern */

void func_0200bff0(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02003e74(arg0);
    }
    func_02005520(M2C_FIELD(arg1, s32 *, 4));
}
