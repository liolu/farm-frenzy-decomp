#include "engine.h"
#include "m2c.h"

s32 func_02009d28(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02009fcc(s32 arg0, s32 arg1) {
    u16 sp0;
    s32 temp_r0;
    s32 var_r1;
    s32 var_r1_2;

    temp_r0 = func_02009d28(0xF, 1, (s32) &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 != 0) {
        if (sp0 & 8) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        *(M2C_UNK *) arg0 = var_r1;
    }
    if (arg1 == 0) {
        return temp_r0;
    }
    if (sp0 & 4) {
        var_r1_2 = 1;
    } else {
        var_r1_2 = 0;
    }
    *(M2C_UNK *) arg1 = var_r1_2;
    return temp_r0;
}
