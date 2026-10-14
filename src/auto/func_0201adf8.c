#include "engine.h"
#include "m2c.h"

void func_020214ac(M2C_UNK, M2C_UNK);

extern s32 data_0207f480;
extern s32 data_0207f484;
extern s32 data_0207f488;
extern s32 data_0207f4c8;

void func_0201adf8(void) {
    if ((data_0207f484 == -0x40) && (data_0207f488 == -0x40)) {
        if (data_0207f4c8 == 5) {
            func_020214ac(1, 0);
        }
        data_0207f480 = 0;
        data_0207f484 = 0;
    }
}
