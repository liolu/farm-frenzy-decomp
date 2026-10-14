#include "engine.h"
#include "m2c.h"

void func_020060f0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02006660(M2C_UNK);
void func_0200681c(M2C_UNK);
M2C_UNK func_02006888(void);
void func_02017894(void);

void func_0201680c(void) {
    s32 temp_r4;

    func_02017894();
    func_020060f0(0, 0, 0, 0);
    temp_r4 = func_02006888();
    func_02006660(1);
    func_0200681c(temp_r4);
}
