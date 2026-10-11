#include "m2c.h"

M2C_UNK func_02012ad0(M2C_UNK *);                   /* extern */
M2C_UNK func_02012cd4(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02087a48;
extern M2C_UNK data_02087a80;
extern M2C_UNK data_0208d9c0;
extern M2C_UNK data_020939c0;

void func_0201d828(void) {
    if (M2C_FIELD(&data_020939c0, s32 *, 0x208) == 0) {
        *(s32 *)0x04000540 = 0;
    }
    if (M2C_FIELD(&data_0208d9c0, s32 *, 0x9CC) == 1) {
        func_02012ad0(&data_02087a48);
        func_02012cd4(&data_02087a48);
    }
    func_02012ad0(&data_02087a80);
    func_02012cd4(&data_02087a80);
}
