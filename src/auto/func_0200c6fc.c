#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02075118;

s32 func_0200c6fc(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(&data_02075118, void **, 8), s32 (**)(), 4)(arg0, arg1);
}
