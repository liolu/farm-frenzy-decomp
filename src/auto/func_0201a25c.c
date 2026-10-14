#include "engine.h"
#include "m2c.h"

M2C_UNK func_02018018(M2C_UNK);
void func_0201a2dc(M2C_UNK, M2C_UNK);
void func_0201a350(M2C_UNK);
void func_0201a360(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201a398(M2C_UNK);
void func_0201a3a8(M2C_UNK, M2C_UNK);
void func_0201a3d0(void);
void func_0201a3d4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201a3f0(void);

void func_0201a25c(s32 arg0, s32 arg1) {
    if (func_02018018(arg1) == 0) {
        M2C_FIELD(arg0, void (**)(s32, s32), 0x164)           = func_0201a2dc;
        M2C_FIELD(arg0, void (**)(s32), 0x168)                = func_0201a350;
        M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x16C) = func_0201a360;
        M2C_FIELD(arg0, void (**)(s32), 0x170)                = func_0201a398;
        return;
    }
    M2C_FIELD(arg0, void (**)(s32, s32), 0x164)           = func_0201a3a8;
    M2C_FIELD(arg0, void (**)(s32), 0x168)                = (void (*)(s32)) func_0201a3d0;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x16C) = func_0201a3d4;
    M2C_FIELD(arg0, void (**)(s32), 0x170)                = (void (*)(s32)) func_0201a3f0;
}
