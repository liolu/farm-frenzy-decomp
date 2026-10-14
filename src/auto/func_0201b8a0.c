#include "engine.h"
#include "m2c.h"

void func_02001188(M2C_UNK);
void func_0201dd98(M2C_UNK, M2C_UNK);
M2C_UNK func_0201e918(void);
M2C_UNK func_0201e928(void);
M2C_UNK func_0201e938(void);

extern s32 data_0207f480;
extern s32 data_0207f484;
extern s32 data_0207f490;
extern s32 data_0207f494;
extern s32 data_0207f4ac;
extern s32 data_0207f4c8;
extern s32 data_020879b8;

void func_0201b8a0(void) {
    data_0207f490 = func_0201e928();
    data_0207f494 = func_0201e938();
    if (func_0201e918() == 0) {
        return;
    }
    if (((s32) data_0207f490 >= 0x3B) && ((s32) data_0207f494 >= 0x40)) {
        if (((s32) data_0207f490 <= 0xC8) && ((s32) data_0207f494 <= 0x4D)) {
            func_0201dd98((s32) (u16) (data_0207f4ac + 0xD), 1);
            data_0207f4c8 = 6;
            data_0207f480 = -0x40;
            func_02001188(0x3B);
        }
    }
    if (((s32) data_0207f490 >= 0x58) && ((s32) data_0207f494 >= 0x56)) {
        if (((s32) data_0207f490 <= 0xAD) && ((s32) data_0207f494 <= 0x66)) {
            func_0201dd98(0x18, 3);
            data_0207f4c8 = 8;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
            func_02001188(0x3B);
        }
    }
    if (((s32) data_0207f490 >= 0x58) && ((s32) data_0207f494 >= 0x71)) {
        if (((s32) data_0207f490 <= 0xAD) && ((s32) data_0207f494 <= 0x82)) {
            if ((s32) data_020879b8 < 0x32) {
                return;
            }
            func_0201dd98(0x19, 4);
            data_0207f4c8 = 0xA;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
            func_02001188(0x3B);
            goto block_31;
        }
        goto block_31;
    }
block_31:
    if (((s32) data_0207f490 >= 0x1F) && ((s32) data_0207f494 >= 0xA7)) {
        if (((s32) data_0207f490 <= 0x58) && ((s32) data_0207f494 <= 0xBB)) {
            func_0201dd98(0x1A, 5);
            data_0207f4c8 = 0xC;
            data_0207f480 = -0x40;
            func_02001188(0x3B);
        }
    }
    if (((s32) data_0207f490 >= 0x65) && ((s32) data_0207f494 >= 0xA7)) {
        if (((s32) data_0207f490 <= 0xA0) && ((s32) data_0207f494 <= 0xBB)) {
            func_0201dd98(0x1B, 6);
            data_0207f4c8 = 0xD;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
            func_02001188(0x3B);
        }
    }
    if (((s32) data_0207f490 >= 0xAE) && ((s32) data_0207f494 >= 0xA7)) {
        if (((s32) data_0207f490 <= 0xE8) && ((s32) data_0207f494 <= 0xBB)) {
            func_0201dd98(0x1C, 7);
            data_0207f4c8 = 0x13;
            data_0207f480 = -0x40;
            func_02001188(0x3B);
        }
    }
}
