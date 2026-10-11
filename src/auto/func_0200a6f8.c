#include "m2c.h"

M2C_UNK func_0200557c(s32);                         /* extern */
s32 func_02009e8c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0200a57c(M2C_UNK);                         /* extern */
s32 func_0200a59c();                                /* extern */

void func_0200a6f8(void) {
    func_0200557c(0x360000);
    if (func_0200a59c() == 1) {
        return;
    }
    if (func_02009e8c(2, 0) != 0) {
        do {
            func_0200557c(0xA3A47);
        } while (func_02009e8c(2, 0) != 0);
    }
    if (func_0200a57c(1) != 0) {
        return;
    }
    do {
        func_0200557c(0xA);
    } while (func_0200a57c(1) == 0);
}
