#include "m2c.h"

M2C_UNK func_0200aacc(u16);                         /* extern */
M2C_UNK func_0200aadc(u16);                         /* extern */
M2C_UNK func_0201a9e4();                            /* extern */
s32 func_02021338();                                /* extern */
s32 func_02021354();                                /* extern */
extern u16 data_0209593c;

s32 func_02021394(void) {
    s32 temp_r4;
    s32 temp_r5;

    func_0200aacc(data_0209593c);
    temp_r4 = func_02021338();
    func_0200aadc(data_0209593c);
    func_0200aacc(data_0209593c);
    temp_r5 = func_02021354();
    func_0200aadc(data_0209593c);
    if ((temp_r4 != 0) && (temp_r5 != 0)) {

    } else {
        func_0201a9e4();
    }
    if ((temp_r4 != 0) && (temp_r5 != 0)) {
        return 1;
    }
    return 0;
}
