#include "m2c.h"
#include "engine.h"

s32 func_02013f48(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    s32 var_lr;

    var_lr = arg0;
    var_ip = 0;
loop_1:
    if ((arg1 <= (s32) M2C_FIELD(var_lr, u16 *, 0)) && (arg2 <= (s32) M2C_FIELD(var_lr, u16 *, 2))) {
        return (var_ip * 6) + arg0;
    }
    var_ip += 1;
    var_lr += 6;
    if (var_ip >= 4) {
        return arg0 + 0x12;
    }
    goto loop_1;
}
