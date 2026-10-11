#include "m2c.h"
#include "engine.h"

M2C_UNK func_02002960(void);
M2C_UNK func_020029b4(void);
void func_02002f14(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02005cdc(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02075d78;
extern M2C_UNK data_02093bec;

void func_0201deb4(s32 arg0) {
    M2C_FIELD(&data_02093bec, s32 *, 0x1C) = arg0;
    switch (arg0) {                                 /* irregular */
    case 0:
        *(u16 *)0x04000008 = (*(u16 *)0x04000008 & 0x43) | 4;
        func_02005cdc(0, func_02002960(), 0x800);
        break;
    case 1:
        *(u16 *)0x0400000A = (*(u16 *)0x0400000A & 0x43) | 4;
        func_02005cdc(0, func_020029b4(), 0x800);
        break;
    }
    func_02002f14((s32) &data_02075d78, 0, 0x40);
    M2C_FIELD(&data_02093bec, s32 *, 0x34) = 0;
    M2C_FIELD(&data_02093bec, s32 *, 0x2C) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x20) = 0x209;
    M2C_FIELD(&data_02093bec, s32 *, 0x64) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x58) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x68) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x5C) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x6C) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x60) = 1;
}
