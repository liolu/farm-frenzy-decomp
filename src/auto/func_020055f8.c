#include "engine.h"
#include "m2c.h"

void func_02005774(void);

extern s16 data_0207f8e8;

void func_020055f8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_0207f8e8 = 1;
        return;
    }
    func_02005774();
}
