#include "m2c.h"
#include "engine.h"

M2C_UNK func_0201e918(void);

extern s32 data_0207f480;
extern s32 data_0207f484;
extern s32 data_0207f4a8;
extern s32 data_0207f4c8;
extern s32 data_020879a0;
extern u16 data_02093d64;

void func_0201ae60(void) {
    if (data_0207f4a8 != 0x10) {
        return;
    }
    if (!(data_02093d64 & 0x2FFF) && (func_0201e918() == 0)) {
        return;
    }
    data_0207f4c8 = 5;
    data_0207f480 = -0x40;
    data_0207f484 = -0x40;
    data_020879a0 = 1;
}
