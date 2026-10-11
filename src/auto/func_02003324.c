#include "m2c.h"
#include "engine.h"

M2C_UNK func_020027c0(void);

extern M2C_UNK data_0207f4f0;

void func_02003324(void) {
    s32 temp_r0;

    temp_r0 = func_020027c0();
    M2C_FIELD(&data_0207f4f0, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        return;
    case 0x40:
        M2C_FIELD(&data_0207f4f0, s32 *, 4) = 0x06894000;
        return;
    case 0x20:
        M2C_FIELD(&data_0207f4f0, s32 *, 4) = 0x06890000;
        return;
    }
}
