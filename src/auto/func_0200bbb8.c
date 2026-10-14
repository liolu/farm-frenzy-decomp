#include "engine.h"
#include "m2c.h"

void func_020070c4(void);
void func_020071d0(M2C_UNK, M2C_UNK);
void func_0200bbe4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02081ec0;

void func_0200bbb8(void) {
    func_020070c4();
    func_020071d0(0xE, (s32) func_0200bbe4);
    M2C_FIELD(&data_02081ec0, s32 *, 4) = 0;
}
