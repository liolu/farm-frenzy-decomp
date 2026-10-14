#include "engine.h"
#include "m2c.h"

void func_02001188(M2C_UNK);
void func_0201dd98(M2C_UNK, M2C_UNK);
M2C_UNK func_0201e918(void);
M2C_UNK func_0201e928(void);
M2C_UNK func_0201e938(void);

extern s32 data_0207f480;
extern s32 data_0207f490;
extern s32 data_0207f494;
extern s32 data_0207f4c8;
extern u16 data_02093d64;

void func_0204d844(void) {
    data_0207f490 = func_0201e928();
    data_0207f494 = func_0201e938();
    if (func_0201e918() != 0) {
        if (((s32) data_0207f490 >= 0x65) && ((s32) data_0207f494 >= 0xA6)) {
            if (((s32) data_0207f490 <= 0x97) && ((s32) data_0207f494 <= 0xB7)) {
                data_0207f4c8 = 5;
                data_0207f480 = -0x40;
                func_0201dd98(6, 0);
                func_02001188(0x3B);
            }
        }
    }
    if (!(data_02093d64 & 1) && !(data_02093d64 & 2)) {
        return;
    }
    data_0207f4c8 = 5;
    data_0207f480 = -0x40;
    func_02001188(0x3B);
}
