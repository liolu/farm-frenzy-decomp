#include "m2c.h"

M2C_UNK func_02002768(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0207f4ea;

void func_0200280c(void) {
    *(s32 *)0x04001000 &= ~0x40000000;
    func_02002768(&data_0207f4ea);
}
