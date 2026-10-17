#include "m2c.h"

M2C_UNK func_0200e904(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200ea1c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0201ec90();                            /* extern */
s32 func_0201f3a0(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_0201f3c4(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_02075d40;
extern M2C_UNK data_02075d48;
extern M2C_UNK data_020879c0;
extern M2C_UNK data_020879c8;
extern M2C_UNK data_020879d0;

void func_0201d624(M2C_UNK arg0) {
    u8 sp40[64];
    u8 sp0[64];

    func_0200e904(sp40, arg0);
    func_0200ea1c(sp40, &data_02075d40);
    func_0200e904(sp0, arg0);
    func_0200ea1c(sp0, &data_02075d48);
    if (M2C_FIELD(&data_020879c0, s32 *, 0x18) != 0) {
        func_0201ec90();
        M2C_FIELD(&data_020879c0, s32 *, 0x18) = 0;
    }
    if (M2C_FIELD(&data_020879c0, s32 *, 4) != 0) {
        func_0201ec90();
        M2C_FIELD(&data_020879c0, s32 *, 4) = 0;
    }
    M2C_FIELD(&data_020879c0, s32 *, 0x18) = func_0201f3a0(&data_020879c8, sp40);
    M2C_FIELD(&data_020879c0, s32 *, 4)    = func_0201f3c4(&data_020879d0, sp0);
}
