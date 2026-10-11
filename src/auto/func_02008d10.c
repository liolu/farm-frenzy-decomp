#include "m2c.h"
#include "engine.h"

void func_0200877c(M2C_UNK, M2C_UNK);
M2C_UNK func_0200bc48(void);

void func_02008d10(s32 arg0) {
    s32 var_r1;

    if (func_0200bc48() != 0) {
        var_r1 = 5;
    } else {
        var_r1 = 0;
    }
    func_0200877c(arg0, var_r1);
}
