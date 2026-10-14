#include "engine.h"
#include "m2c.h"

void func_02001b88(s32 arg0) {
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~7) | arg0;
}
