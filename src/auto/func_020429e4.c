#include "m2c.h"

M2C_UNK func_0201dd10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0201dd50(u16);                         /* extern */
M2C_UNK func_0201dd68(u16);                         /* extern */

void func_020429e4(u32 arg0, s32 arg1) {
    switch (arg0) {
        default:
            break;
        case 0:
            func_0201dd10(0x1B, 1);
            break;
        case 1:
            func_0201dd10(0x22, 2);
            break;
        case 2:
            func_0201dd10(0x28, 3);
            break;
        case 3:
            func_0201dd10(0x23, 4);
            break;
        case 4:
            func_0201dd10(0x24, 5);
            break;
        case 5:
            func_0201dd10(0x1A, 6);
            break;
        case 6:
            func_0201dd10(0x1F, 7);
            break;
        case 7:
            func_0201dd10(0x25, 8);
            break;
        case 8:
            func_0201dd10(0x27, 9);
            break;
        case 9:
            func_0201dd10(0x18, 0xA);
            break;
        case 10:
            func_0201dd10(0x1E, 0xB);
            break;
        case 11:
            func_0201dd10(0x26, 0xC);
            break;
        case 12:
            func_0201dd10(0x20, 0xD);
            break;
        case 13:
            func_0201dd10(0x1C, 0xE);
            break;
        case 14:
            func_0201dd10(0x21, 0xF);
            break;
        case 15:
            func_0201dd10(0x16, 0x10);
            break;
        case 17:
            func_0201dd10(0x17, 0x12);
            break;
        case 18:
            func_0201dd10(0x1D, 0x13);
            break;
    }
    func_0201dd68((u16) (arg0 + 1));
    if (arg1 != 1) {
        return;
    }
    func_0201dd50((u16) (arg0 + 1));
}
