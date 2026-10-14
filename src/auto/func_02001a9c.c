#include "engine.h"
#include "m2c.h"

extern s16 data_02075098;
extern s16 data_0207f4d0;

void func_02001a9c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_02075098       = 0;
    data_0207f4d0       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
