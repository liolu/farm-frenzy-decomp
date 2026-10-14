#include "engine.h"
#include "m2c.h"

M2C_UNK func_0201e918(void);
M2C_UNK func_0201e928(void);
M2C_UNK func_0201e938(void);

extern s32 data_0207f480;
extern s32 data_0207f484;
extern s32 data_0207f490;
extern s32 data_0207f494;
extern s32 data_0207f4ac;
extern s32 data_0207f4c8;

void func_0204f778(void) {
    data_0207f490 = func_0201e928();
    data_0207f494 = func_0201e938();
    if (func_0201e918() == 0) {
        return;
    }
    if (((s32) data_0207f490 >= 0x5A) && ((s32) data_0207f494 >= 0x43)) {
        if (((s32) data_0207f490 <= 0xD1) && ((s32) data_0207f494 <= 0x5A)) {
            data_0207f4c8 = 0;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
        }
    }
    if (((s32) data_0207f490 >= 0x5A) && ((s32) data_0207f494 >= 0x67)) {
        if (((s32) data_0207f490 <= 0xD1) && ((s32) data_0207f494 <= 0x77)) {
            data_0207f4ac = 5;
            data_0207f4c8 = 0;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
        }
    }
}
