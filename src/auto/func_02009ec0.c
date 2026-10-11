#include "m2c.h"

M2C_UNK func_02009ca4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0200a6f8();                            /* extern */
extern M2C_UNK *data_020750bc;
extern M2C_UNK func_02009994;

void func_02009ec0(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = data_020750bc;
    data_020750bc = &func_02009994;
    func_0200a6f8();
    data_020750bc = temp_r4;
    func_02009ca4(0xE, 0, 0, arg0, arg1);
}
