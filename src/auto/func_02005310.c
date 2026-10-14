#include "m2c.h"

M2C_UNK func_02003a38(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_02003b7c(M2C_UNK);                     /* extern */
M2C_UNK func_020052f4(M2C_UNK);                     /* extern */
extern M2C_UNK data_0207f8c4;
extern M2C_UNK func_02005398;

void func_02005310(void) {
    if (M2C_FIELD(&data_0207f8c4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_0207f8c4, u16 *, 0) = 1U;
    func_020052f4(0);
    M2C_FIELD(&data_0207f8c4, s32 *, 8)       = 0;
    M2C_FIELD(&data_0207f8c4, s32 *, 0xC)     = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *) 0x04000102, s16 *, 0)  = 0xC1;
    func_02003a38(8, &func_02005398);
    func_02003b7c(8);
    M2C_FIELD(&data_0207f8c4, s32 *, 4) = 0;
}
