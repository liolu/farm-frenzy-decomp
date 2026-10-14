#include "engine.h"
#include "m2c.h"

void func_02014d78(M2C_UNK, M2C_UNK);
M2C_UNK func_0201ec14(M2C_UNK);

s32 func_0201f430(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0201ec14(arg1);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02014d78(arg0, temp_r0);
    return temp_r0;
}
