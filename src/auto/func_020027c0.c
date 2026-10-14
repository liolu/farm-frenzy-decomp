#include "m2c.h"

M2C_UNK func_02002768(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0207f4e4;

void func_020027c0(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02002768(&data_0207f4e4);
}
