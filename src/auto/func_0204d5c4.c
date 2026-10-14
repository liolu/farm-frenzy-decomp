#include "engine.h"
#include "m2c.h"

void func_02001b20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02001ce4(M2C_UNK);
void func_02001f74(M2C_UNK);
void func_020020c4(M2C_UNK);
void func_0201d7a4(void);

void func_0204d5c4(void) {
    func_02001f74(1);
    func_02001ce4(2);
    func_020020c4(0x20);
    func_02001b20(1, 4, 0);
    *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | 0x200010;
    func_0201d7a4();
}
