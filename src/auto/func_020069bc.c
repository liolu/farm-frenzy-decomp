#include "engine.h"
#include "m2c.h"

void func_0200557c(M2C_UNK);
void func_02006998(M2C_UNK, M2C_UNK);
M2C_UNK func_02006a8c(void);
void func_020071d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0200721c(M2C_UNK, M2C_UNK);

void func_020069bc(void) {
    func_020071d0(7, (s32) func_02006998);
    if (func_02006a8c() == 0) {
        return;
    }
    if (func_0200721c(7, 1) != 0) {
        return;
    }
    do {
        func_0200557c(0x64);
    } while (func_0200721c(7, 1) == 0);
}
