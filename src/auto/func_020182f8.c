#include "engine.h"
#include "m2c.h"

void func_02006660(M2C_UNK);
void func_0200681c(M2C_UNK);
M2C_UNK func_02006888(void);

void func_020182f8(void) {
    s32 temp_r4;

    temp_r4 = func_02006888();
    func_02006660(1);
    func_0200681c(temp_r4);
}
