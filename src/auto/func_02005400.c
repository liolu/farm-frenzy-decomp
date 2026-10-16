/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005400 from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/libs/nitro/os/calls/func_02005400.c (license:
 * MIT), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef volatile u16 vu16;
typedef volatile u64 vu64;
typedef int BOOL;
typedef u64 OSTick;
typedef int OSIntrMode;
typedef struct {
    u16 useTick;
    u16 pad;
    BOOL needResetTimer;
    volatile u64 tickCounter;
} OSiTickState;
extern OSiTickState data_0207f8c4;
extern OSIntrMode func_0200550c(void);
extern OSIntrMode func_02005520(OSIntrMode state);
OSTick func_02005400(void) {
    vu16 countL;
    vu64 countH;

    OSIntrMode prev = func_0200550c();

    countL = *(u16 *) 0x04000100;
    countH = data_0207f8c4.tickCounter & 0xffffffffffffULL;

    if ((*(volatile u32 *) 0x04000214) & 8 && !(countL & 0x8000)) {
        countH++;
    }

    (void) func_02005520(prev);

    return (countH << 16) | countL;
}
