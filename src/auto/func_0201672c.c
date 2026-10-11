#include "m2c.h"
#include "engine.h"

void func_02002b04(void);
void func_020165d8(void);

void func_0201672c(void) {
    func_02002b04();
    func_020165d8();
    *(s32 *)0x04000600 = (*(s32 *)0x04000600 & ~0xC0000000) | 0x80000000;
}
