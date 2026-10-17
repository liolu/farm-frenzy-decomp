#include "m2c.h"

M2C_UNK WaitByLoop(M2C_UNK);                        /* extern */
s32 func_02007240(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_0200c014(M2C_UNK arg0) {
    if (func_02007240(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_02007240(0xD, arg0, 0) != 0);
}
