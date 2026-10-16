/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02065444 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3x.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern u32 data_0207509c;
extern void func_020057a0(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_02005c98(u32 data, void *dest, u32 size);
extern void func_02002cd0(void);
extern void func_020058fc(u32 dmaNo, void *dest, u32 data, u32 size, void (*callback)(void *), void *arg);
void func_02002cd0(void) {
    s32 i;

    if (data_0207509c != -1) {
        func_020058fc(data_0207509c, (void *) 0x04000330, 0, 0x10, 0, 0);
        func_020057a0(data_0207509c, (void *) 0x04000360, 0, 0x60);
    } else {
        func_02005c98(0, (void *) 0x04000330, 0x10);
        func_02005c98(0, (void *) 0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        (*(vu32 *) 0x040004d0) = 0;
    }
}
