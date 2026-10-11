#include "m2c.h"
#include "engine.h"

M2C_UNK func_02002994(void);
M2C_UNK func_020029e8(void);
void func_02002f68(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02005cdc(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02075d78;
extern M2C_UNK data_02093bec;

void func_0201df84(s32 arg0) {
    M2C_FIELD(&data_02093bec, s32 *, 0x18) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0) = arg0;
    switch (arg0) {                                 /* irregular */
    case 4:
        *(u16 *)0x04001008 = (*(u16 *)0x04001008 & 0x43) | 4;
        func_02005cdc(0, func_02002994(), 0x800);
        break;
    case 5:
        *(u16 *)0x0400100A = (*(u16 *)0x0400100A & 0x43) | 4;
        func_02005cdc(0, func_020029e8(), 0x800);
        break;
    }
    func_02002f68((s32) &data_02075d78, 0, 0x40);
    M2C_FIELD(&data_02093bec, s32 *, 4) = 0;
    M2C_FIELD(&data_02093bec, s32 *, 0x38) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x10) = 0x209;
    M2C_FIELD(&data_02093bec, s32 *, 0x4C) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x70) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x50) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x74) = 1;
    M2C_FIELD(&data_02093bec, s32 *, 0x54) = 2;
    M2C_FIELD(&data_02093bec, s32 *, 0x78) = 1;
}
