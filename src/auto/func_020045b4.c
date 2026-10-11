#include "m2c.h"

M2C_UNK func_02003fc0(s32, void *);                 /* extern */
M2C_UNK func_02004198();                            /* extern */
s32 func_0200550c();                                /* extern */
M2C_UNK func_02005520(s32);                         /* extern */
extern M2C_UNK data_0207f590;

void func_020045b4(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_0200550c();
    temp_r5 = *M2C_FIELD(&data_0207f590, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02003fc0(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02004198();
    func_02005520(temp_r4);
}
