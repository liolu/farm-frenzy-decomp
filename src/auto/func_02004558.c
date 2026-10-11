#include "m2c.h"

M2C_UNK func_0200406c(s32, void *);                 /* extern */
M2C_UNK func_02004150(void *);                      /* extern */
M2C_UNK func_02004604(void *);                      /* extern */
M2C_UNK func_020046bc();                            /* extern */
M2C_UNK func_020047b8();                            /* extern */
M2C_UNK func_020047ec();                            /* extern */
M2C_UNK func_02004b20(void *);                      /* extern */
M2C_UNK func_02005774();                            /* extern */
extern M2C_UNK data_0207f590;

void func_02004558(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0207f590, void ***, 8);
    func_020047b8();
    func_02004b20(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0200406c(temp_r0, temp_r4);
    }
    func_02004150(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02004604(temp_r4 + 0x9C);
    func_020047ec();
    func_020046bc();
    func_02005774();
}
