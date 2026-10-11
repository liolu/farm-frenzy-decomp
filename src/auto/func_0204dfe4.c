#include "m2c.h"
#include "engine.h"

void func_02001188(M2C_UNK);
void func_0201dd98(M2C_UNK, M2C_UNK);
void func_0201ddf0(M2C_UNK, M2C_UNK);
M2C_UNK func_0201e918(void);
M2C_UNK func_0201e928(void);
M2C_UNK func_0201e938(void);
void func_0204e158(void);

extern s32 data_0207f480;
extern s32 data_0207f484;
extern s32 data_0207f490;
extern s32 data_0207f494;
extern s32 data_0207f4c8;
extern M2C_UNK data_02097898;

void func_0204dfe4(void) {
    s32 var_r3;
    s32 var_r3_2;

    data_0207f490 = func_0201e928();
    data_0207f494 = func_0201e938();
    if (func_0201e918() == 0) {
        return;
    }
    if (((s32) data_0207f490 >= 0x51) && ((s32) data_0207f494 >= 0xAB)) {
        if (((s32) data_0207f490 <= 0x63) && ((s32) data_0207f494 <= 0xBA)) {
            func_0201dd98(3, 0);
            func_02001188(0x3B);
            if (M2C_FIELD(&data_02097898, s32 *, 4) == 0) {
                var_r3 = 8;
            } else {
                var_r3 = M2C_FIELD(&data_02097898, s32 *, 4) - 1;
            }
            M2C_FIELD(&data_02097898, s32 *, 4) = var_r3;
            func_0201ddf0((s32) (u16) (var_r3 + 7), 0);
            func_0204e158();
        }
    }
    if (((s32) data_0207f490 >= 0x78) && ((s32) data_0207f494 >= 0xAB)) {
        if (((s32) data_0207f490 <= 0x8D) && ((s32) data_0207f494 <= 0xBA)) {
            func_0201dd98(4, 1);
            func_02001188(0x3B);
            if (M2C_FIELD(&data_02097898, s32 *, 4) == 8) {
                var_r3_2 = 0;
            } else {
                var_r3_2 = M2C_FIELD(&data_02097898, s32 *, 4) + 1;
            }
            M2C_FIELD(&data_02097898, s32 *, 4) = var_r3_2;
            func_0201ddf0((s32) (u16) (var_r3_2 + 7), 0);
            func_0204e158();
        }
    }
    if (((s32) data_0207f490 >= 0xBA) && ((s32) data_0207f494 >= 0xAB)) {
        if (((s32) data_0207f490 <= 0xF4) && ((s32) data_0207f494 <= 0xBA)) {
            data_0207f4c8 = 9;
            data_0207f480 = -0x40;
            data_0207f484 = -0x40;
            func_02001188(0x3B);
        }
    }
}
