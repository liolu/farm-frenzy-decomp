/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066b40 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_0207f50c;
extern const u16 data_02053b64[8];
extern s32 func_020027f8(void);
void func_0200377c(void) {
    s32 bank                       = func_020027f8();
    data_0207f50c.texPlttBank      = bank;
    data_0207f50c.texPlttStartAddr = data_02053b64[bank >> 4] << 12;
}
