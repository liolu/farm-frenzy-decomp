#include "m2c.h"

M2C_UNK func_0200aa94(u16);                         /* extern */
M2C_UNK func_0200aab0(u16);                         /* extern */
extern s32 data_020814fc;

s32 func_02008d84(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_0200aa94((u16) data_020814fc);
            return 0;
        case 10:
            func_0200aab0((u16) data_020814fc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
