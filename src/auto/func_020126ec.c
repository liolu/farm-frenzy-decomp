#include "m2c.h"
#include "engine.h"

void func_0201268c(M2C_UNK);

void func_020126ec(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    func_0201268c(arg0);
}
