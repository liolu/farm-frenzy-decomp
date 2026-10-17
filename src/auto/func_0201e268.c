#include "m2c.h"

extern M2C_UNK data_02093c44;
extern M2C_UNK data_02093d10;
extern M2C_UNK data_02093d24;

void func_0201e268(s32 arg0) {
    s32 temp_lr;

    temp_lr = arg0 * 0x18;
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_02093d24 + temp_lr)), M2C_UNK(**)(void *, s32),
              4)((M2C_UNK *) ((s8 *) &data_02093d10 + temp_lr), *((M2C_UNK *) ((s8 *) &data_02093c44 + (arg0 * 4))));
}
