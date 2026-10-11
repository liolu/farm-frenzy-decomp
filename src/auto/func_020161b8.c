#include "m2c.h"

M2C_UNK func_02005774();                            /* extern */
s32 func_02011fec(void *, s32);                     /* extern */
M2C_UNK func_0201630c(void *);                      /* extern */

s32 func_020161b8(void *arg0, void **arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r4;

    var_r4 = 0;
    if (arg0 != NULL) {
        if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) == 0x4E465452)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            if ((arg0 != NULL) && ((u32) M2C_FIELD(arg0, u16 *, 6) >= 0x101U)) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 0;
            }
            if (var_r0_3 != 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }
        }
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 == 0) {
        if (arg0 != NULL) {
            if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) == 0x4E465452)) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 0;
            }
            if (var_r0_4 != 0) {
                var_r0_5 = 1;
            } else {
                var_r0_5 = 0;
            }
            if (var_r0_5 != 0) {
                if ((arg0 != NULL) && ((u32) M2C_FIELD(arg0, u16 *, 6) >= 0x100U)) {
                    var_r0_6 = 1;
                } else {
                    var_r0_6 = 0;
                }
                if (var_r0_6 != 0) {
                    var_r0_5 = 1;
                } else {
                    var_r0_5 = 0;
                }
            }
        } else {
            var_r0_5 = 0;
        }
        if (var_r0_5 == 0) {
            func_02005774();
        }
        var_r4 = 1;
    }
    func_0201630c(arg0);
    temp_r0 = func_02011fec(arg0, 0x46494E46);
    if (temp_r0 == 0) {
        *arg1 = NULL;
        return 0;
    }
    *arg1 = temp_r0 + 8;
    if (var_r4 != 0) {
        M2C_FIELD(M2C_FIELD(*arg1, void **, 8), s8 *, 7) = 0;
    }
    return 1;
}
