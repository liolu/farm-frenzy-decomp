/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020047b8 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_020047b8.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0207f590;
extern OSIntrMode func_0200550c(void);
extern OSIntrMode func_02005520(OSIntrMode mode);
u32 func_020047b8(void) {
    OSIntrMode interruptMode = func_0200550c();
    u32 count;

    if (data_0207f590.rescheduleCount < (u32) (0 - 1)) {
        count = data_0207f590.rescheduleCount++;
    }
    (void) func_02005520(interruptMode);

    return count;
}
