/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02066b74 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_0207509c;
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
extern void func_02005cb4(const void *src, void *dest, u32 size);
extern void func_020059c0(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020059c0(dmaNo, src, dest, size, 0, 0);
    } else {
        func_02005cb4(src, dest, size);
    }
}
void func_020037b0(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0207509c, src, (void *) (data_0207f50c.texPlttStartAddr + destSlotAddr), size);
}
