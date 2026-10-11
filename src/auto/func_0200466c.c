#include "m2c.h"
#include "engine.h"

void func_02004198(void);
M2C_UNK func_0200550c(void);
void func_02005520(M2C_UNK);

void func_0200466c(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0200550c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02004198();
    func_02005520(temp_r4);
}
