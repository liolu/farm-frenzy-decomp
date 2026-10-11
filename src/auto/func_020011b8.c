#include "m2c.h"

M2C_UNK func_0201ebc0(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_0207f480;

void func_020011b8(s32 arg0) {
    if (M2C_FIELD(&data_0207f480, s32 *, 0x18) == arg0) {
        return;
    }
    func_0201ebc0(0, arg0, 0);
    M2C_FIELD(&data_0207f480, s32 *, 0x18) = arg0;
}
