#include "engine.h"
#include "m2c.h"

void func_0201e6e8(void);
void func_0201e808(void);

extern M2C_UNK data_0207f480;
extern M2C_UNK data_027e0000;

void func_0200113c(void) {
    if ((M2C_FIELD(&data_0207f480, s32 *, 0) == M2C_FIELD(&data_0207f480, s32 *, 0xC)) &&
        (M2C_FIELD(&data_0207f480, s32 *, 4) == M2C_FIELD(&data_0207f480, s32 *, 8))) {
        func_0201e6e8();
        func_0201e808();
    }
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
}
