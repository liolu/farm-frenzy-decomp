#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200b188(void);
void func_0201ef40(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201f094(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02075db8;
extern M2C_UNK data_02093fa4;

void func_0201f224(void) {
    s32 temp_r4;

    temp_r4 = func_0200b188();
    switch (M2C_FIELD(&data_02093fa4, s32 *, 0x1C)) { /* irregular */
    case 1:
        if ((u32) (M2C_FIELD(&data_02093fa4, u32 *, 0x10) + temp_r4) < (u32) M2C_FIELD(&data_02093fa4, u32 *, 0x14)) {
            func_0201ef40(M2C_FIELD(&data_02093fa4, s32 *, 4) + M2C_FIELD(&data_02093fa4, u32 *, 0x10), data_02075db8 + M2C_FIELD(&data_02093fa4, u32 *, 0x10), temp_r4);
            M2C_FIELD(&data_02093fa4, u32 *, 0x10) = (u32) (M2C_FIELD(&data_02093fa4, u32 *, 0x10) + temp_r4);
        } else {
            func_0201ef40(M2C_FIELD(&data_02093fa4, s32 *, 4) + M2C_FIELD(&data_02093fa4, u32 *, 0x10), data_02075db8 + M2C_FIELD(&data_02093fa4, u32 *, 0x10), M2C_FIELD(&data_02093fa4, u32 *, 0x14) - M2C_FIELD(&data_02093fa4, u32 *, 0x10));
            M2C_FIELD(&data_02093fa4, u32 *, 0x10) = (u32) M2C_FIELD(&data_02093fa4, u32 *, 0x14);
        }
        break;
    case 2:
        if ((u32) (M2C_FIELD(&data_02093fa4, u32 *, 0x10) + temp_r4) < (u32) M2C_FIELD(&data_02093fa4, u32 *, 0x14)) {
            func_0201f094(M2C_FIELD(&data_02093fa4, s32 *, 4) + M2C_FIELD(&data_02093fa4, u32 *, 0x10), data_02075db8 + M2C_FIELD(&data_02093fa4, u32 *, 0x10), temp_r4);
            M2C_FIELD(&data_02093fa4, u32 *, 0x10) = (u32) (M2C_FIELD(&data_02093fa4, u32 *, 0x10) + temp_r4);
        } else {
            func_0201f094(M2C_FIELD(&data_02093fa4, s32 *, 4) + M2C_FIELD(&data_02093fa4, u32 *, 0x10), data_02075db8 + M2C_FIELD(&data_02093fa4, u32 *, 0x10), M2C_FIELD(&data_02093fa4, u32 *, 0x14) - M2C_FIELD(&data_02093fa4, u32 *, 0x10));
            M2C_FIELD(&data_02093fa4, u32 *, 0x10) = (u32) M2C_FIELD(&data_02093fa4, u32 *, 0x14);
        }
        break;
    }
    if (M2C_FIELD(&data_02093fa4, s32 *, 0x1C) == 5) {
        return;
    }
    if ((u32) M2C_FIELD(&data_02093fa4, u32 *, 0x10) >= (u32) M2C_FIELD(&data_02093fa4, u32 *, 0x14)) {
        M2C_FIELD(&data_02093fa4, s32 *, 0x1C) = 0;
    }
}
