#include "m2c.h"

s32 func_0200550c();                                /* extern */
M2C_UNK func_02005520(s32);                         /* extern */
M2C_UNK func_0201116c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02086b3c;

void func_020196f0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200550c();
    func_0201116c(&data_02086b3c, arg0);
    func_02005520(temp_r4);
}
