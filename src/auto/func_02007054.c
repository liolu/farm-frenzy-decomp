#include "engine.h"
#include "m2c.h"

void func_02004bf4(M2C_UNK, M2C_UNK);
void func_02006394(void);
void func_020063a8(void);

void func_02007054(s32 arg0, s32 arg1, s32 arg2) {
    func_02006394();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02004bf4(arg0 + 0x3C + (arg1 * 4), 4);
    func_020063a8();
}
