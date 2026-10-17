#include "m2c.h"

extern M2C_UNK data_02093c5c;
extern M2C_UNK data_02093cc8;
extern M2C_UNK data_02093cdc;

void func_0201e448(s32 arg0) {
    s32 temp_lr;

    temp_lr = arg0 * 0x18;
    M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_02093cdc + temp_lr)), M2C_UNK(**)(void *, s32),
              4)((M2C_UNK *) ((s8 *) &data_02093cc8 + temp_lr), *((M2C_UNK *) ((s8 *) &data_02093c5c + (arg0 * 4))));
}
