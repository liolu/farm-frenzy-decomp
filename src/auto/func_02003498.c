#include "m2c.h"
#include "engine.h"

void func_02002668(M2C_UNK);
void func_02005a58(M2C_UNK);

extern s32 data_0207509c;
extern s32 data_0207f4f0;

void func_02003498(void) {
    if (data_0207509c != -1) {
        func_02005a58(data_0207509c);
    }
    func_02002668(data_0207f4f0);
    data_0207f4f0 = 0;
}
