#include "m2c.h"
#include "engine.h"

void func_02001ba4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0207f480;

void func_02001094(void) {
    if (M2C_FIELD(&data_0207f480, s32 *, 0) != M2C_FIELD(&data_0207f480, s32 *, 0xC)) {
        if ((s32) M2C_FIELD(&data_0207f480, s32 *, 0xC) < (s32) M2C_FIELD(&data_0207f480, s32 *, 0)) {
            M2C_FIELD(&data_0207f480, s32 *, 0xC) = (s32) (M2C_FIELD(&data_0207f480, s32 *, 0xC) + M2C_FIELD(&data_0207f480, s32 *, 0x24));
        } else if ((s32) M2C_FIELD(&data_0207f480, s32 *, 0xC) > (s32) M2C_FIELD(&data_0207f480, s32 *, 0)) {
            M2C_FIELD(&data_0207f480, s32 *, 0xC) = (s32) (M2C_FIELD(&data_0207f480, s32 *, 0xC) - M2C_FIELD(&data_0207f480, s32 *, 0x24));
        }
        func_02001ba4(0x0400006C, (s32) M2C_FIELD(&data_0207f480, s32 *, 0xC) >> 2);
    }
    if (M2C_FIELD(&data_0207f480, s32 *, 4) == M2C_FIELD(&data_0207f480, s32 *, 8)) {
        return;
    }
    if ((s32) M2C_FIELD(&data_0207f480, s32 *, 8) < (s32) M2C_FIELD(&data_0207f480, s32 *, 4)) {
        M2C_FIELD(&data_0207f480, s32 *, 8) = (s32) (M2C_FIELD(&data_0207f480, s32 *, 8) + M2C_FIELD(&data_0207f480, s32 *, 0x24));
    } else if ((s32) M2C_FIELD(&data_0207f480, s32 *, 8) > (s32) M2C_FIELD(&data_0207f480, s32 *, 4)) {
        M2C_FIELD(&data_0207f480, s32 *, 8) = (s32) (M2C_FIELD(&data_0207f480, s32 *, 8) - M2C_FIELD(&data_0207f480, s32 *, 0x24));
    }
    func_02001ba4(0x0400106C, (s32) M2C_FIELD(&data_0207f480, s32 *, 8) >> 2);
}
