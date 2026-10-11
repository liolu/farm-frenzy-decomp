#include "m2c.h"
#include "engine.h"

void func_020044c4(M2C_UNK, M2C_UNK);
M2C_UNK func_0200550c(void);

extern M2C_UNK data_0207f590;

void func_020044a4(void) {
    func_0200550c();
    func_020044c4(M2C_FIELD(&data_0207f590, s32 *, 0x28), 0);
}
