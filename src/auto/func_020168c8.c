#include "engine.h"
#include "m2c.h"

extern s32 data_02085b40;

void func_020168c8(s32 arg0) {
    data_02085b40 &= ~arg0;
}
