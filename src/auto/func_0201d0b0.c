#include "m2c.h"

M2C_UNK func_0200e904(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0200ea1c(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02012dfc(M2C_UNK *);                   /* extern */
M2C_UNK func_02012e28(M2C_UNK *);                   /* extern */
M2C_UNK func_02012e60(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_0201308c(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_020132b8(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_0201ec90(s32);                         /* extern */
s32 func_0201f3a0(s32 *, M2C_UNK *);                /* extern */
s32 func_0201f3c4(s32 *, M2C_UNK *);                /* extern */
s32 func_0201f3e8(s32 *, M2C_UNK *);                /* extern */
extern M2C_UNK data_02075d08;
extern M2C_UNK data_02075d10;
extern M2C_UNK data_02075d18;
extern M2C_UNK data_02087a0c;
extern M2C_UNK data_02087a20;
extern M2C_UNK data_02087a34;
extern M2C_UNK data_02087a9c;
extern M2C_UNK data_02087ac0;
extern M2C_UNK data_02087ae4;

void func_0201d0b0(M2C_UNK arg0, s32 arg1) {
    u8 sp88[64];
    u8 sp48[64];
    u8 sp8[64];
    s32 sp4;
    s32 sp0;
    M2C_UNK *var_r7;
    M2C_UNK *var_r8;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r4;

    func_0200e904(sp88, arg0);
    func_0200ea1c(sp88, &data_02075d08);
    func_0200e904(sp48, arg0);
    func_0200ea1c(sp48, &data_02075d10);
    func_0200e904(sp8, arg0);
    func_0200ea1c(sp8, &data_02075d18);
    var_r4 = 0;
    if (arg1 == 0) {
        var_r0 = func_0201f3e8(&sp4, sp88);
    } else {
        var_r0 = func_0201f3a0(&sp4, sp48);
    }
    if (arg1 == 2) {
        if (*(s32 *) 0x04001000 & 0x300010) {
            var_r4 = 1;
        }
        func_02012dfc(&data_02087a9c);
        func_02012e28(&data_02087a34);
        var_r7 = &data_02087a9c;
        var_r8 = &data_02087a34;
    } else {
        if (*(s32 *) 0x04000000 & 0x300010) {
            var_r4 = 1;
        }
        if (arg1 == 1) {
            var_r7 = &data_02087ac0;
            var_r8 = &data_02087a20;
        } else {
            var_r7 = &data_02087ae4;
            var_r8 = &data_02087a0c;
        }
        func_02012dfc(var_r7);
        func_02012e28(var_r8);
    }
    if (var_r4 != 0) {
        func_02012e60(sp4, 0, arg1, var_r7);
    } else {
        func_0201308c(sp4, 0, arg1, var_r7);
    }
    func_0201ec90(var_r0);
    temp_r4 = func_0201f3c4(&sp0, sp8);
    func_020132b8(sp0, 0, arg1, var_r8);
    func_0201ec90(temp_r4);
}
