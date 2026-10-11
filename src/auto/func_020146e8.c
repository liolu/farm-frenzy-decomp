#include "m2c.h"

M2C_UNK func_020143ec(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0201442c(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0201446c(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_020146e8(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    switch (arg1) {                                 /* irregular */
    case 0:
        func_020143ec(arg0, arg2, arg3, arg4, arg5, arg6);
        return;
    case 1:
        func_0201442c(arg0, arg3, arg4, arg5, arg6);
        return;
    case 2:
        func_0201446c(arg0, arg3, arg4, arg5, arg6);
        return;
    }
}
