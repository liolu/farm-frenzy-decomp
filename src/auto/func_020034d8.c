#include "engine.h"
#include "m2c.h"

M2C_UNK func_02002834(void);

extern M2C_UNK data_0207f4f0;

void func_020034d8(void) {
    M2C_FIELD(&data_0207f4f0, s32 *, 0x18) = func_02002834();
}
