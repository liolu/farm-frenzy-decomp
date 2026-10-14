#include "engine.h"
#include "m2c.h"

void func_02005c3c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02013424(s32 arg0) {
    func_02005c3c(0, arg0 + 4, 0x18);
    M2C_FIELD(arg0, s32 *, 4) = 0x1000;
    M2C_FIELD(arg0, s32 *, 8) = 0x1000;
}
