#include "m2c.h"

M2C_UNK func_02016a74(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_02018bf4(void *, M2C_UNK, M2C_UNK);                      /* extern */
extern M2C_UNK data_02093dd4;
extern M2C_UNK data_02093e54;

void func_0201eb8c(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = (M2C_UNK *) ((s8 *) &data_02093e54 + (arg0 * 4));
    func_02018bf4(temp_r4, arg1, arg2);
    func_02016a74(temp_r4, M2C_FIELD(&data_02093dd4, s32 *, 4), 0);
}
