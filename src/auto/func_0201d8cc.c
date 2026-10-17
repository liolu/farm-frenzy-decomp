#include "m2c.h"

M2C_UNK func_0200e904(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200ea1c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0201d4dc(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02075d68;

void func_0201d8cc(M2C_UNK arg0) {
    u8 sp0[64];

    func_0200e904(sp0, arg0);
    func_0200ea1c(sp0, &data_02075d68);
    func_0201d4dc(sp0, 5, 2, 2);
}
