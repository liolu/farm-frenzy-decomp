#include "m2c.h"

u16 func_02003f40();                                /* extern */
M2C_UNK func_0200aacc(u16);                         /* extern */
M2C_UNK func_0200aadc(u16);                         /* extern */
M2C_UNK func_0200b19c(s32);                         /* extern */
M2C_UNK func_0200b964();                            /* extern */
extern M2C_UNK data_02093fa4;

void func_0201ee54(s32 arg0) {
    M2C_FIELD(&data_02093fa4, s32 *, 8) = arg0;
    func_0200b964();
    M2C_FIELD(&data_02093fa4, u16 *, 0) = func_02003f40();
    func_0200aacc(M2C_FIELD(&data_02093fa4, u16 *, 0));
    func_0200b19c(M2C_FIELD(&data_02093fa4, s32 *, 8));
    func_0200aadc(M2C_FIELD(&data_02093fa4, u16 *, 0));
    M2C_FIELD(&data_02093fa4, s32 *, 0x1C) = 0;
}
