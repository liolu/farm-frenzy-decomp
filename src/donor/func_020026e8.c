/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02003fd8 from projets/blue-dragon-awakened-shadow/src/donor/func_02003fd8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0207f4d4;
extern UnkGxVramState data_0207f4d4;
extern void func_02001c2c(u32 lcdc);
void func_020026e8(s32 subObjExtPltt) {
    data_0207f4d4.lcdc          = ~subObjExtPltt & (data_0207f4d4.lcdc | data_0207f4d4.subObjExtPltt);
    data_0207f4d4.subObjExtPltt = subObjExtPltt;

    switch (subObjExtPltt) {
        case 0x100:
            (*(u32 *) ((0x04001000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000249) = 0x83;
            break;
        case 0x000:
            (*(u32 *) ((0x04001000) | 0x0)) &= ~0x80000000;
            break;
    }
    func_02001c2c(data_0207f4d4.lcdc);
}
