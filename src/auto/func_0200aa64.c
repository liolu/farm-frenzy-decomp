#include "m2c.h"

extern M2C_UNK data_02081660;

s32 func_0200aa64(void) {
    if (!(M2C_FIELD(&data_02081660, s32 *, 0x114) & 4)) {
        return 1;
    }
    return 0;
}
