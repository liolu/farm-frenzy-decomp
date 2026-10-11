#include "m2c.h"

void *func_02013f48(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02014260(M2C_UNK, u16, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02054914;

void func_020143ec(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_02014260(arg0, M2C_FIELD(func_02013f48(&data_02054914, arg2, arg3), u16 *, 4), arg1, arg4, arg5);
}
