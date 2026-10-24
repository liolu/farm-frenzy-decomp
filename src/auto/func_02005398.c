#include "m2c.h"

typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;

extern OSiTickState data_0207f8c4;
extern void func_02003b08(u32 arg0, void (*arg1)(s32), s32 arg2);

void func_02005398(void) {
    data_0207f8c4.tickCounter++;
    if (data_0207f8c4.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_0207f8c4.needResetTimer = 0;
    }
    func_02003b08(0, (void (*)(s32)) func_02005398, 0);
}
