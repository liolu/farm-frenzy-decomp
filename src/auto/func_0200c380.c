#include "m2c.h"
#include "engine.h"

void func_02005774(void);
void func_0200c3ec(void);

extern M2C_UNK data_02081ee0;

void func_0200c380(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02081ee0, s32 *, 0xC) != 0) {
            return;
        }
        var_r0 = 0;
        if (M2C_FIELD(&data_02081ee0, s32 (**)(), 0x18) != NULL) {
            var_r0 = M2C_FIELD(&data_02081ee0, s32 (**)(), 0x18)();
        }
        if (var_r0 != 0) {
            func_0200c3ec();
        }
        M2C_FIELD(&data_02081ee0, s32 *, 0xC) = 1;
        return;
    }
    func_02005774();
}
