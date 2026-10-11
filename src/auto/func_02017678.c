#include "m2c.h"

M2C_UNK func_020043a8(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_0200466c(M2C_UNK *);                   /* extern */
M2C_UNK func_0200495c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020864f4;
extern M2C_UNK data_020864fc;
extern M2C_UNK data_0208651c;
extern M2C_UNK data_02086630;
extern M2C_UNK data_02086af0;
extern M2C_UNK func_02017978;

void func_02017678(s32 arg0) {
    if (M2C_FIELD(&data_020864f4, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020864f4, s32 *, 4) = 0;
    func_0200495c(&data_020864fc, &data_0208651c, 8);
    func_020043a8(&data_02086630, &func_02017978, 0, &data_02086af0, 0x400, arg0);
    M2C_FIELD(&data_020864f4, s32 *, 0) = 1;
    func_0200466c(&data_02086630);
}
