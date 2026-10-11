#include "m2c.h"
#include "engine.h"

void func_020020c4(M2C_UNK);
void func_02005a58(M2C_UNK);

extern s32 data_0207509c;
extern M2C_UNK data_0207f4f0;

void func_020032dc(void) {
    if (data_0207509c != -1) {
        func_02005a58(data_0207509c);
    }
    func_020020c4(M2C_FIELD(&data_0207f4f0, s32 *, 0x14));
    M2C_FIELD(&data_0207f4f0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0207f4f0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0207f4f0, s32 *, 0xC) = 0;
}
