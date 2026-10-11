#include "m2c.h"
#include "engine.h"

void func_02002448(M2C_UNK);
void func_02005a58(M2C_UNK);

extern s32 data_0207509c;
extern M2C_UNK data_0207f50c;

void func_0200381c(void) {
    if (data_0207509c != -1) {
        func_02005a58(data_0207509c);
    }
    func_02002448(M2C_FIELD(&data_0207f50c, s32 *, 0xC));
    M2C_FIELD(&data_0207f50c, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0207f50c, s32 *, 8) = 0;
}
