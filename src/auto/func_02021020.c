#include "m2c.h"
#include "engine.h"

void func_02020e9c(M2C_UNK);

extern M2C_UNK data_02095c40;

void func_02021020(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02020e9c(var_r4);
        var_r4 += 1;
    } while (var_r4 < 3);
    M2C_FIELD(&data_02095c40, s16 *, 0xFC) = -1;
}
