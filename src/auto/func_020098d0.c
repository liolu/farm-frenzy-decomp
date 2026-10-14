#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02081570;

s32 func_020098d0(s32 arg0) {
    return M2C_FIELD(&data_02081570, u16 *, 0x38) & arg0;
}
