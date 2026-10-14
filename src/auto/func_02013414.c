#include "engine.h"
#include "m2c.h"

void func_02013424(M2C_UNK);

void func_02013414(s32 arg0, s32 arg1) {
    *(M2C_UNK *) arg0 = arg1;
    func_02013424(arg0);
}
