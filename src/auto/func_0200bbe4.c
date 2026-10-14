#include "engine.h"
#include "m2c.h"

void func_02005774(void);
void func_0200bc58(void);

extern M2C_UNK data_02081ec0;

void func_0200bbe4(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (M2C_FIELD(&data_02081ec0, s32 *, 0) != 0) {
            return;
        }
        var_r0                              = 1;
        M2C_FIELD(&data_02081ec0, s32 *, 0) = 1;
        if (M2C_FIELD(&data_02081ec0, s32(**)(), 4) != NULL) {
            var_r0 = M2C_FIELD(&data_02081ec0, s32(**)(), 4)();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0200bc58();
        return;
    }
    func_02005774();
}
