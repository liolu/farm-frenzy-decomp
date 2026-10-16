/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_0200550c(void);
extern u32 func_02005520(u32 state);
extern u32 data_0207f8ec;
extern u16 data_0207f8f0[9];
u32 func_020056b0(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020056ec(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_0200550c();

    mask = bank & data_0207f8ec & 0x1ff;

    while (1) {
        s32 i = 31 - func_020056b0(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_0207f8f0[i] == lockID) {
            data_0207f8f0[i] = 0;
            data_0207f8ec &= ~(1 << i);
        }
    }
    func_02005520(enabled);
}
