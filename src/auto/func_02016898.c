#include "engine.h"
#include "m2c.h"

void func_020061b4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02085b40;

void func_02016898(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020061b4(arg0, 0);
    M2C_FIELD(&data_02085b40, s32 *, 8) = (s32) (M2C_FIELD(&data_02085b40, s32 *, 8) & ~arg0);
}
