#include "m2c.h"

M2C_UNK func_02012634(void *);                      /* extern */
M2C_UNK func_02013414(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013578(void *, M2C_UNK);             /* extern */

void func_0201353c(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
    M2C_FIELD(arg0, s32 *, 0x38) = -1;
    func_02013414(arg0 + 0x3C, 1);
    func_02012634(arg0);
    func_02013578(arg0, arg1);
}
