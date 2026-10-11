#include "m2c.h"

M2C_UNK func_02008e00();                            /* extern */
extern s32 data_020814f8;

void func_02008800(s32 arg0) {
    if (data_020814f8 != 0) {
        return;
    }
    data_020814f8 = 1;
    func_02008e00(arg0);
}
