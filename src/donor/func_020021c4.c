/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020038d4 from projets/blue-dragon-awakened-shadow/src/donor/func_020038d4.c (same code in another game of this
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
void func_020021c4(s32 objExtPltt) {
    data_0207f4d4.lcdc       = ~objExtPltt & (data_0207f4d4.lcdc | data_0207f4d4.objExtPltt);
    data_0207f4d4.objExtPltt = objExtPltt;

    switch (objExtPltt) {
        case 0x20:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000245) = 0x85;
            break;
        case 0x40:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000246) = 0x85;
            break;
        case 0x00:
            (*(u32 *) ((0x04000000) | 0x0)) &= ~0x80000000;
            break;
        default:
            break;
    }
    func_02001c2c(data_0207f4d4.lcdc);
}
