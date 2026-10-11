#include "m2c.h"

s32 func_02018f04();                                /* extern */
M2C_UNK func_02018f60(M2C_UNK);                     /* extern */

s32 func_02018f80(M2C_UNK arg0) {
    if (func_02018f04() == 0) {
        return 0;
    }
    func_02018f60(arg0);
    return 1;
}
