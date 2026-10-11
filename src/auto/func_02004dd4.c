#include "m2c.h"

s32 func_02004944();                                /* extern */
s32 func_02004e68(M2C_UNK);                         /* extern */
s32 func_02004f4c(M2C_UNK);                         /* extern */
M2C_UNK func_02004ff4(M2C_UNK, s32);                /* extern */
M2C_UNK func_02005008(M2C_UNK, s32);                /* extern */
M2C_UNK func_020050d0(s32);                         /* extern */
M2C_UNK func_020050d8(s32);                         /* extern */
extern M2C_UNK data_0207f80c;

void func_02004dd4(void) {
    func_02004ff4(2, func_02004e68(2));
    func_02005008(2, func_02004f4c(2));
    if ((M2C_FIELD(&data_0207f80c, s32 *, 4) != 0) && ((func_02004944() & 3) != 1)) {
        return;
    }
    func_020050d0(0x0200002B);
    func_020050d8(0x023E0021);
}
