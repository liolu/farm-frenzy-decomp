#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);

extern M2C_UNK data_0207f920;

s32 func_02006888(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200550c();
    if (M2C_FIELD(&data_0207f920, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_0207f920, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_0207f920, s32 *, 0x20);
    }
    func_02005520(temp_r0);
    return var_r4;
}
