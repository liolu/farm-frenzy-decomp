#include "engine.h"
#include "m2c.h"

void func_0200108c(void);
void func_0200bc38(M2C_UNK);
void func_0200bc58(void);
void func_0200c3ec(void);
M2C_UNK func_0201f214(void);

extern M2C_UNK data_0207f480;

void func_02001018(void) {
    if (func_0201f214() != 1) {
        func_0201f214();
    }
    func_0200bc38((s32) func_0200108c);
    if (M2C_FIELD(&data_0207f480, s32 *, 0x38) == 1) {
        func_0200c3ec();
        return;
    }
    func_0200bc58();
}
