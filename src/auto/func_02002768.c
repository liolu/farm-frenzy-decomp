#include "m2c.h"

M2C_UNK func_02001c2c(u16);                         /* extern */
extern u16 data_0207f4d4;

u16 func_02002768(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0 = 0;
    data_0207f4d4 |= temp_r4;
    func_02001c2c(temp_r4);
    return temp_r4;
}
