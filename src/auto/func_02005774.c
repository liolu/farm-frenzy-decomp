/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005774 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0200550c(void);
extern void func_02005774(void);
extern void func_02005784(void);
void func_02005774(void) {
    while (1) {
        func_0200550c();
        func_02005784();
    }
}
void func_02005784(void);
