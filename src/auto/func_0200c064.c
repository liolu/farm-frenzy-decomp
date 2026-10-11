#include "m2c.h"
#include "engine.h"

void func_020050bc(M2C_UNK, M2C_UNK);
M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);
M2C_UNK func_0200bdcc(void);

extern s32 data_02081ec8;

void func_0200c064(s32 arg0) {
    s32 temp_r4;
    s32 var_r1;

    temp_r4 = func_0200550c();
    data_02081ec8 = arg0;
    if (func_0200bdcc() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_020050bc(0xF000, var_r1);
    }
    func_02005520(temp_r4);
}
