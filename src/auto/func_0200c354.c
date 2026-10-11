#include "m2c.h"
#include "engine.h"

void func_02005774(void);

extern s16 data_02081ecc;

void func_0200c354(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02081ecc = 1;
        return;
    }
    func_02005774();
}
