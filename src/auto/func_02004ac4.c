#include "m2c.h"
M2C_UNK func_02004604(void *);
M2C_UNK func_02004b80(s32, void *);
s32 func_0200550c();
M2C_UNK func_02005520(s32);
extern M2C_UNK data_0207f5b4;
void func_02004ac4(void *arg0) {
    s32 temp = func_0200550c();
    s32 d    = M2C_FIELD(&data_0207f5b4, s32 *, 4);
    if (M2C_FIELD(arg0, s32 *, 8) == d) {
        s32 n                       = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = n;
        if (n == 0) {
            func_02004b80(d, arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            func_02004604(arg0);
        }
    }
    func_02005520(temp);
}