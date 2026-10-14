#include "engine.h"
#include "m2c.h"

void func_02006194(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02085b40;

s32 func_02016850(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&data_02085b40, s32 *, 8)) {
        return 0;
    }
    func_02006194(arg0, 0);
    M2C_FIELD(&data_02085b40, s32 *, 8) = (s32) (M2C_FIELD(&data_02085b40, s32 *, 8) | arg0);
    return 1;
}
