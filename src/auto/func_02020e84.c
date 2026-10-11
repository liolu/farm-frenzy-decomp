#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02095b40;

void func_02020e84(void) {
    M2C_FIELD(&data_02095b40, s16 *, 8) = 0x7F;
    M2C_FIELD(&data_02095b40, s16 *, 0xA) = 0x7F;
}
