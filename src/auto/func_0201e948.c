#include "engine.h"
#include "m2c.h"

void func_020167dc(void);

extern M2C_UNK data_02093dd4;

void func_0201e948(void) {
    if (M2C_FIELD(&data_02093dd4, s32 *, 0x1C) == 0) {
        return;
    }
    func_020167dc();
}
