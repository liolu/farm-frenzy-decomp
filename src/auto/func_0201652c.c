#include "m2c.h"

u8 func_0201652c(u8 **arg0) {
    u8 *temp_r1;
    u8 temp_ret;

    temp_r1 = *arg0;
    *(u8 *) (temp_r1 + 1);
    temp_ret = *temp_r1;
    *arg0    = temp_r1 + 1;
    return temp_ret;
}
