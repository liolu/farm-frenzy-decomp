/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_0207f590;
extern u32 func_0200550c(void);
extern void func_02005520(u32 state);

/* EnableScheduler_02002da0 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/EnableScheduler_02002da0.c (license: MIT), reused by tools/donor_match.py */
u32 func_020047ec(void) {
    u32 savedState = func_0200550c();
    u32 count      = 0;

    if (data_0207f590.rescheduleCount != 0) {
        count                         = data_0207f590.rescheduleCount;
        data_0207f590.rescheduleCount = count - 1;
    }
    func_02005520(savedState);
    return count;
}
