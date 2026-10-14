#include "engine.h"
#include "m2c.h"

void func_02006288(M2C_UNK, M2C_UNK);
void func_02006d9c(M2C_UNK);
void func_02018888(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02018908(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02018888(arg0, arg2, arg3);
    func_02006288(arg0, arg0 + arg1);
    func_02006d9c(arg0);
}
