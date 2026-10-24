#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    M2C_UNK (*func)(s32);
    s32 enable;
    s32 arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_0207f55c[8];
M2C_UNK func_02003b7c(s32);

void func_02003b08(u32 arg0, M2C_UNK (*arg1)(s32), s32 arg2) {
    u32 mask;

    mask                     = 1 << (arg0 + 3);
    data_0207f55c[arg0].func = arg1;
    data_0207f55c[arg0].arg  = arg2;
    func_02003b7c(mask);
    data_0207f55c[arg0].enable = 1;
}
