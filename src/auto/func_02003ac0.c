/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02077594 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_interrupt.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_0207f52c[8];
extern void func_02003ac0(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_02003b7c(u32 mask);
extern UnkIrqCallbackInfo data_0207f52c[8];
void func_02003ac0(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_0207f52c[dmaNo].func   = func;
    data_0207f52c[dmaNo].arg    = arg;
    data_0207f52c[dmaNo].enable = func_02003b7c(mask) & mask;
}
u32 func_02003b7c(u32 mask);
