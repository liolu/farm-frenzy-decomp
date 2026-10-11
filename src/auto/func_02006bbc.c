#include "m2c.h"
#include "engine.h"

void func_02004bd8(M2C_UNK, M2C_UNK);

extern s32 data_02081460;

s32 func_02006bbc(void) {
    func_02004bd8(data_02081460, 4);
    return *(M2C_UNK *)data_02081460;
}
