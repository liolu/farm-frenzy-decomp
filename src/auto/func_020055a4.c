#include "engine.h"
#include "m2c.h"

void func_020055f8(M2C_UNK, M2C_UNK);
void func_020070c4(void);
void func_020071d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0200721c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0207f8e8;

void func_020055a4(void) {
    if (M2C_FIELD(&data_0207f8e8, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0207f8e8, u16 *, 2) = 1U;
    func_020070c4();
    do {

    } while (func_0200721c(0xC, 1) == 0);
    func_020071d0(0xC, (s32) func_020055f8);
}
