#include "m2c.h"

M2C_UNK func_02002768(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0207f4ec;

void func_02002834(void) {
    *(s32 *)0x04001000 &= ~0x80000000;
    func_02002768(&data_0207f4ec);
}
