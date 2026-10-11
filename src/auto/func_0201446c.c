#include "m2c.h"

void *func_02013f48(M2C_UNK *);                     /* extern */
M2C_UNK func_02014370(M2C_UNK, u16, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020548e4;
extern s32 data_020834cc;

void func_0201446c(M2C_UNK arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4) {
    func_02014370(arg0, M2C_FIELD(func_02013f48(&data_020548e4), u16 *, 4), data_020834cc, arg3, arg4);
}
