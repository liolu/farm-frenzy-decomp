/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dDrawSpriteWithMtxDoubleAffineFast from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Softsprite.c
 * (license: none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01;
        fx32 _10, _11;
    };
    fx32 m[2][2];
    fx32 a[4];
} MtxFx22;
extern void G3_Scale(fx32 x, fx32 y, fx32 z);
extern void G3_Translate(fx32 x, fx32 y, fx32 z);
static inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    (*(REGType32v *) (0x04000000 + 0x46c)) = (u32) x;
    (*(REGType32v *) (0x04000000 + 0x46c)) = (u32) y;
    (*(REGType32v *) (0x04000000 + 0x46c)) = (u32) z;
}
static inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) x;
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) y;
    (*(REGType32v *) (0x04000000 + 0x470)) = (u32) z;
}
extern void func_020122f0(s16 px, s16 py, fx32 pz, int sx, int sy, const MtxFx22 *baseMtx, fx32 U0, fx32 V0, fx32 U1, fx32 V1);
void func_020120cc(const MtxFx22 *baseMtx);
void func_020120fc(fx32 U0, fx32 U1, fx32 V0, fx32 V1);
void func_020122f0(s16 px, s16 py, fx32 pz, int sx, int sy, const MtxFx22 *baseMtx, fx32 U0, fx32 V0, fx32 U1, fx32 V1) {
    G3_Translate(((fx32) 0x0000000000001000L) * px + ((fx32) 0x0000000000001000L) * sx,
                 ((fx32) 0x0000000000001000L) * py + ((fx32) 0x0000000000001000L) * sy, pz);

    func_020120cc(baseMtx);

    G3_Scale(((fx32) 0x0000000000001000L) * sx, ((fx32) 0x0000000000001000L) * sy, ((fx32) 0x0000000000001000L));

    func_020120fc(U0, U1, V0, V1);
}
