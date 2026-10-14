#include "engine.h"
#include "m2c.h"

void func_020021c4(M2C_UNK);
void func_02005a58(M2C_UNK);

extern s32 data_0207509c;
extern M2C_UNK data_0207f4f0;

void func_020033d8(void) {
    if (data_0207509c != -1) {
        func_02005a58(data_0207509c);
    }
    func_020021c4(M2C_FIELD(&data_0207f4f0, s32 *, 8));
    M2C_FIELD(&data_0207f4f0, s32 *, 8) = 0;
    M2C_FIELD(&data_0207f4f0, s32 *, 4) = 0;
}
