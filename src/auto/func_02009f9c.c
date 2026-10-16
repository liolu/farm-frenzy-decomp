#include "engine.h"
#include "m2c.h"

s32 func_02009d28(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0200a59c(void);

s32 func_02009f9c(s32 arg0) {
    if (func_0200a59c() == 0) {
        return 0;
    }
    return func_02009d28(0x10, (s32) (u16) arg0, 0);
}
