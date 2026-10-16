/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_LoadOBJExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load2d.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_0207509c;
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
extern void func_02005cb4(const void *src, void *dest, u32 size);
extern void func_020059c0(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020059c0(dmaNo, src, dest, size, 0, 0);
    } else {
        func_02005cb4(src, dest, size);
    }
}
void func_0200336c(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0207509c, src, (void *) (data_0207f4f0.objExtPlttAddr + destSlotAddr), size);
}
