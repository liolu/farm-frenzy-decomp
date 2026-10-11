#include "m2c.h"
#include "engine.h"

void func_02001c2c(M2C_UNK);

extern u16 data_0207f4d4;

void func_02002530(s32 arg0) {
    data_0207f4d4 |= arg0;
    func_02001c2c(arg0);
}
