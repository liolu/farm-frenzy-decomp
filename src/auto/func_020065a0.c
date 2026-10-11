#include "m2c.h"
#include "engine.h"

M2C_UNK func_02006490(M2C_UNK);
void func_02006660(M2C_UNK);
M2C_UNK func_0200697c(void);
void func_02006a1c(void);
M2C_UNK func_02006a44(void);
M2C_UNK func_02006a8c(void);

s32 func_020065a0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02006a8c() == 0) {
        return 0;
    }
    temp_r0_3 = func_02006a44();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0200697c() > 0) {
        do {

        } while (func_02006490(0) != 0);
        temp_r0_2 = func_02006a44();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02006660(1);
block_12:
    func_02006a1c();
    do {
        func_02006490(1);
        temp_r0 = func_02006a44();
    } while (temp_r0 == 0);
    return temp_r0;
}
