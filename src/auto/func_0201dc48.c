#include "engine.h"
#include "m2c.h"

void func_0201dc10(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0201dc48(s32 arg0, s32 arg1, s32 arg2) {
    func_0201dc10(arg0, arg1, arg2);
    M2C_FIELD(((arg2 * 0x58) + arg0), s32 *, 0x1C) = 1;
}
