#include "engine.h"
#include "m2c.h"

void func_02005d38(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020084a8(s32 arg0) {
    func_02005d38(arg0, 0, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}
