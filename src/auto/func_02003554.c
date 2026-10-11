#include "m2c.h"
#include "engine.h"

void func_020026e8(M2C_UNK);
void func_02005a58(M2C_UNK);

extern s32 data_0207509c;
extern M2C_UNK data_0207f4f0;

void func_02003554(void) {
    if (data_0207509c != -1) {
        func_02005a58(data_0207509c);
    }
    func_020026e8(M2C_FIELD(&data_0207f4f0, s32 *, 0x18));
    M2C_FIELD(&data_0207f4f0, s32 *, 0x18) = 0;
}
