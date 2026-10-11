#include "m2c.h"

M2C_UNK func_020043a8(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0200466c(void *);                      /* extern */
s32 func_0200550c();                                /* extern */
M2C_UNK func_02005520(s32);                         /* extern */
M2C_UNK func_0200c4a0(M2C_UNK *);                   /* extern */
extern void *data_020820a8;
extern M2C_UNK data_020820ac;
extern M2C_UNK data_020824d0;
extern M2C_UNK func_0200c4b4;

void func_0200c414(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0200550c();
    if (data_020820a8 == NULL) {
        data_020820a8 = arg0;
        func_0200c4a0(arg0 + 0xC4);
        func_0200c4a0(&data_020820ac);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_020043a8(arg0, &func_0200c4b4, arg0, &data_020824d0, 0x400, 0x14);
        func_0200466c(arg0);
    }
    func_02005520(temp_r4);
}
