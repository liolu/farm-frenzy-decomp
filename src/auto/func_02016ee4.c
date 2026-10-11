#include "m2c.h"

M2C_UNK func_02011210();   /* extern */
void *func_020112d4();            /* extern */
extern M2C_UNK data_02085b58;

void func_02016ee4(void *arg0) {
    void *var_r1;

    var_r1 = func_020112d4(&data_02085b58, 0);
    if (var_r1 != NULL) {
loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020112d4(&data_02085b58);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02011210(&data_02085b58, var_r1, arg0);
}
