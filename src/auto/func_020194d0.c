#include "m2c.h"
#include "engine.h"

void func_0201919c(M2C_UNK);
void func_0201956c(M2C_UNK);
void func_020195f0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02086b30;
extern M2C_UNK data_020871c0;

void func_020194d0(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0201956c(arg0);
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x168)(arg0);
    func_020195f0((s32) &data_020871c0, arg0);
    if (M2C_FIELD(&data_02086b30, s32 *, 4) != 0) {
        func_020195f0(M2C_FIELD(&data_02086b30, s32 *, 4) + 0x4E0, arg0);
    }
    func_0201919c(arg0);
}
