#include "m2c.h"

M2C_UNK func_02005774();                            /* extern */
M2C_UNK func_02009264();                            /* extern */
s32 func_020092dc(M2C_UNK *);                       /* extern */
M2C_UNK func_02009370(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02093d58;
extern M2C_UNK data_02093d7a;

void func_0201e760(void) {
    func_02009264();
    if (func_020092dc(&data_02093d7a) == 0) {
        func_02005774();
    }
    func_02009370(&data_02093d7a);
    M2C_FIELD(&data_02093d58, s32 *, 8) = 0;
}
