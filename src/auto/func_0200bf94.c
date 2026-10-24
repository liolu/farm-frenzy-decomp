#include "m2c.h"
extern u32 func_0200550c(void);
extern u32 func_02005520(u32);
extern u32 func_02003e80(s32);
extern u32 func_02003f38(u32);
extern void WaitByLoop(s32);

void func_0200bf94(s32 a0, s32 *a1) {
    u32 flag;
    for (;;) {
        *(u32 *) ((s8 *) a1 + 4) = func_0200550c();
        flag                     = func_02003f38(0x27fffe8) & 0x40;
        *(u32 *) ((s8 *) a1 + 0) = flag;
        if (flag != 0) {
            return;
        }
        if (func_02003e80(a0) == 0) {
            return;
        }
        func_02005520(*(u32 *) ((s8 *) a1 + 4));
        WaitByLoop(1);
    }
}
