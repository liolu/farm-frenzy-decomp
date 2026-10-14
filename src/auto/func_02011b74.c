#include "engine.h"
#include "m2c.h"

void func_02011abc(M2C_UNK);
void func_02011ad0(M2C_UNK);

void func_02011b74(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02011abc(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02011ad0(arg0);
}
