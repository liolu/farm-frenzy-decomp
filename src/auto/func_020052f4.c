#include "engine.h"
#include "m2c.h"

extern u16 data_0207f8c0;

void func_020052f4(s32 arg0) {
    data_0207f8c0 |= 1 << arg0;
}
