/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02065f38 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_load2d.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern u32 data_0207509c;
extern void func_02005cb4(const void *src, void *dest, u32 size);
extern void func_02005820(u32 dmaNo, const void *src, void *dest, u32 size);
static inline void UnkGxCopy32(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1 && size > 0x30) {
        func_02005820(dmaNo, src, dest, size);
    } else {
        func_02005cb4(src, dest, size);
    }
}
static inline void *UnkGetSubObjCharPtr(void) {
    return (void *) 0x6600000;
}
void func_02003174(const void *src, u32 offset, u32 size) {
    u8 *base = (u8 *) UnkGetSubObjCharPtr();
    UnkGxCopy32(data_0207509c, src, base + offset, size);
}
