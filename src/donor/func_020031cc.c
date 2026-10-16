/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_BeginLoadBGExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load2d.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef struct {
    s32 subBgExtPltt;
    u32 objExtPlttAddr;
    s32 objExtPltt;
    u32 bgExtPlttOffset;
    u32 bgExtPlttAddr;
    s32 bgExtPltt;
    s32 subObjExtPltt;
} UnkGxExtPlttState;
extern UnkGxExtPlttState data_0207f4f0;
extern s32 func_0200279c(void);
void func_020031cc(void) {
    data_0207f4f0.bgExtPltt = func_0200279c();

    switch (data_0207f4f0.bgExtPltt) {
        case 0x00:
            break;
        case 0x10:
            data_0207f4f0.bgExtPlttAddr   = 0x6880000;
            data_0207f4f0.bgExtPlttOffset = 0;
            break;
        case 0x40:
            data_0207f4f0.bgExtPlttAddr   = 0x6894000;
            data_0207f4f0.bgExtPlttOffset = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_0207f4f0.bgExtPlttAddr   = 0x6890000;
            data_0207f4f0.bgExtPlttOffset = 0;
            break;
        default:
            break;
    }
}
