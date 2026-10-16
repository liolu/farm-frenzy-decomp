/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020669b4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load3d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
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
extern void func_02005820(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_020059c0(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02005820(dmaNo, src, dest, size);
    } else {
        func_02005cb4(src, dest, size);
    }
}
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_020059c0(dmaNo, src, dest, size, 0, 0);
    } else {
        func_02005cb4(src, dest, size);
    }
}
void func_020035f0(const void *src, u32 destSlotAddr, u32 size) {
    void *dest;

    if (data_0207f50c.texStartAddr2 == 0) {
        dest = (void *) (data_0207f50c.texStartAddr + destSlotAddr);
    } else if (destSlotAddr + size < data_0207f50c.texSize1) {
        dest = (void *) (data_0207f50c.texStartAddr + destSlotAddr);
    } else if (destSlotAddr >= data_0207f50c.texSize1) {
        dest = (void *) (data_0207f50c.texStartAddr2 + destSlotAddr - data_0207f50c.texSize1);
    } else {
        void *dest2 = (void *) data_0207f50c.texStartAddr2;
        u32 size1   = data_0207f50c.texSize1 - destSlotAddr;
        UnkGxCopy32(data_0207509c, src, (void *) (data_0207f50c.texStartAddr + destSlotAddr), size1);
        UnkGxCopy32Async(data_0207509c, (u8 *) src + size1, dest2, size - size1);
        return;
    }
    UnkGxCopy32Async(data_0207509c, src, dest, size);
}
