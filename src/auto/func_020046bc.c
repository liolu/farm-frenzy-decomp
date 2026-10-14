#include "engine.h"
#include "m2c.h"

void func_02004198(void);
M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);

void func_020046bc(void) {
    s32 temp_r4;

    temp_r4 = func_0200550c();
    func_02004198();
    func_02005520(temp_r4);
}
