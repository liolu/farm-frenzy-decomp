#include "m2c.h"

M2C_UNK func_0201e248(M2C_UNK, s32);                /* extern */
M2C_UNK func_0201e2a4(s32);                         /* extern */
M2C_UNK func_0201e494(s32, s32, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_0207f318;
extern M2C_UNK data_0207f320;
extern M2C_UNK data_0207f328;
extern M2C_UNK data_0207f330;
extern M2C_UNK data_0207f33c;
extern M2C_UNK data_0207f344;
extern u32 data_0207f4ac;

void func_0204f324(void) {
    s32 var_r9;

    func_0201e2a4(0x411);
    var_r9 = 1;
    do {
        if (var_r9 == 1) {
            func_0201e248(0, 2);
        } else {
            func_0201e248(0, 1);
        }
        switch (data_0207f4ac) {
            default:
                break;
            case 0:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f318);
                break;
            case 1:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f320);
                break;
            case 2:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f328);
                break;
            case 4:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f330);
                break;
            case 3:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f33c);
                break;
            case 5:
                func_0201e494(var_r9 + 0xCD, var_r9 + 0xAA, 0, &data_0207f344);
                break;
        }
        var_r9 -= 1;
    } while (var_r9 >= 0);
}
