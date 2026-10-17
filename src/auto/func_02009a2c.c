#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
M2C_UNK func_020070c4();                            /* extern */
M2C_UNK func_020071d0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200721c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020815ac;
extern M2C_UNK func_02009ac4;

void func_02009a2c(void) {
    s32 temp_r1;

    if (M2C_FIELD(&data_020815ac, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020815ac, u16 *, 0)    = 1U;
    M2C_FIELD(&data_020815ac, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020815ac, s32 *, 0x20) = 0;
    func_020070c4();
    if (func_0200721c(8, 1) == 0) {
        do {
            WaitByLoop(0x64);
        } while (func_0200721c(8, 1) == 0);
    }
    func_020071d0(8, &func_02009ac4);
    temp_r1                             = *(s32 *) 0x027FFC3C;
    M2C_FIELD(&data_020815ac, s32 *, 8) = temp_r1;
    M2C_FIELD(&data_020815ac, s32 *, 4) = temp_r1;
}
