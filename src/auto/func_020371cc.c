#include "m2c.h"

s32 func_020054a0();                                /* extern */
extern M2C_UNK data_02096634;
extern M2C_UNK data_02096638;

void func_020371cc(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_ip;

    if (arg2 == -1) {
        temp_ip = (func_020054a0() * 0x5D588B65) + 0x269EC3;
        *arg0   = ((u16) ((u32) ((temp_ip >> 0x10) * 0x85) >> 0x10) + 0x45) << 0xC;
        *arg1   = ((u16) ((u32) (((u32) ((temp_ip * 0x5D588B65) + 0x269EC3) >> 0x10) * 0x54) >> 0x10) + 0x3F) << 0xC;
        return;
    }
    temp_r3 = arg2 * 0x48;
    *arg0   = *((M2C_UNK *) ((s8 *) &data_02096634 + temp_r3));
    *arg1   = *((M2C_UNK *) ((s8 *) &data_02096638 + temp_r3));
}
