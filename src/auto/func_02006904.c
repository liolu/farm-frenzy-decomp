#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);

extern M2C_UNK *data_0207f920;

s32 func_02006904(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0200550c();
    var_r4 = 0;
    var_r1 = data_0207f920;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    func_02005520(temp_r0);
    return var_r4;
}
