#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006904(void);
M2C_UNK func_02006940(void);

s32 func_0200697c(void) {
    s32 temp_r4;

    temp_r4 = func_02006904();
    return (0x100 - temp_r4) - func_02006940();
}
