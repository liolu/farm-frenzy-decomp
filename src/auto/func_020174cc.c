#include "engine.h"
#include "m2c.h"

void func_02011274(M2C_UNK, M2C_UNK);
void func_0201692c(M2C_UNK);

extern M2C_UNK data_02086428;

void func_020174cc(s32 arg0) {
    func_0201692c(M2C_FIELD(arg0, s32 *, 0x40));
    func_02011274((s32) &data_02086428, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
