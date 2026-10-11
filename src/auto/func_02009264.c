#include "m2c.h"
#include "engine.h"

void func_020070c4(void);
void func_020071d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0200721c(M2C_UNK, M2C_UNK);
void func_02008fe4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02081570;

void func_02009264(void) {
    if (M2C_FIELD(&data_02081570, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02081570, u16 *, 0) = 1U;
    func_020070c4();
    M2C_FIELD(&data_02081570, s16 *, 0x10) = 0;
    M2C_FIELD(&data_02081570, s32 *, 4) = 0;
    M2C_FIELD(&data_02081570, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02081570, s16 *, 0x36) = 0;
    M2C_FIELD(&data_02081570, s16 *, 0x34) = 0;
    M2C_FIELD(&data_02081570, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_02081570, s16 *, 0x38) = 0;
    do {

    } while (func_0200721c(6, 1) == 0);
    func_020071d0(6, (s32) func_02008fe4);
}
