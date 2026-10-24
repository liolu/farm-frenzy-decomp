/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020109ec from projets/livly-garden/src/donor/func_020109ec.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef enum GXTexFmt {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4
} GXTexFmt;
typedef enum NNSG2dBGExtPlttSlot {
    NNS_G2D_BGEXTPLTTSLOT_MAIN0,
    NNS_G2D_BGEXTPLTTSLOT_MAIN1,
    NNS_G2D_BGEXTPLTTSLOT_MAIN2,
    NNS_G2D_BGEXTPLTTSLOT_MAIN3,
    NNS_G2D_BGEXTPLTTSLOT_SUB0,
    NNS_G2D_BGEXTPLTTSLOT_SUB1,
    NNS_G2D_BGEXTPLTTSLOT_SUB2,
    NNS_G2D_BGEXTPLTTSLOT_SUB3
} NNSG2dBGExtPlttSlot;
typedef struct NNSG2dPaletteCompressInfo {
    u16 numPalette;
    u16 pad16;
    void *pPlttIdxTbl;
} NNSG2dPaletteCompressInfo;
typedef struct NNSG2dPaletteData {
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    u32 szByte;
    void *pRawData;
} NNSG2dPaletteData;
typedef u16 GXBGPltt16[16];
typedef u16 GXBGPltt256[256];
extern void func_02004c10(const void *startAddr, u32 nBytes);
extern void func_020031cc(void);
extern void func_0200326c(const void *src, u32 destSlotAddr, u32 szByte);
extern void func_020032dc(void);
extern void func_0200341c(void);
extern void func_02003434(const void *src, u32 destSlotAddr, u32 szByte);
extern void func_02003498(void);
static inline u32 GetCompressedPlttOriginalIndex(const NNSG2dPaletteCompressInfo *pCmpInfo, int idx) {
    return ((u16 *) pCmpInfo->pPlttIdxTbl)[idx];
}
static inline u32 GetPlttSize(const NNSG2dPaletteData *pPltData) {
    switch (pPltData->fmt) {
        case GX_TEXFMT_PLTT16:
            return sizeof(GXBGPltt16);
        case GX_TEXFMT_PLTT256:
            return sizeof(GXBGPltt256);
        default:
            break;
    }
    return 0;
}
#pragma opt_dead_assignments off
void func_02013ff4(NNSG2dBGExtPlttSlot slot, const NNSG2dPaletteData *pPltData, const NNSG2dPaletteCompressInfo *pCmpInfo) {
    u32 offset;
    void (*prepairLoad)(void);
    void (*cleanupLoad)(void);
    void (*loader)(const void *, u32, u32);
    int i;
    u32 szOnePltt;
    u16 offsetAddr;

    offset     = 0;
    i          = 0;
    offsetAddr = 0;
    szOnePltt  = 0;
    offset     = (u32) (slot * 0x2000);

    func_02004c10(pPltData->pRawData, pPltData->szByte);

    if (slot <= NNS_G2D_BGEXTPLTTSLOT_MAIN3) {
        prepairLoad = func_020031cc;
        cleanupLoad = func_020032dc;
        loader      = func_0200326c;
    } else {
        offset -= 0x2000 * NNS_G2D_BGEXTPLTTSLOT_SUB0;
        prepairLoad = func_0200341c;
        cleanupLoad = func_02003498;
        loader      = func_02003434;
    }

    if (pCmpInfo != ((void *) 0)) {
        szOnePltt        = GetPlttSize(pPltData);
        const int numIdx = pCmpInfo->numPalette;
        i                = 0;

        if (numIdx <= 0) {
            return;
        }

        do {
            offsetAddr       = GetCompressedPlttOriginalIndex(pCmpInfo, i);
            const void *pSrc = (u8 *) pPltData->pRawData + szOnePltt * i;

            prepairLoad();
            loader(pSrc, offset + szOnePltt * offsetAddr, szOnePltt);
            cleanupLoad();
            i++;
        } while (i < numIdx);
    } else {
        prepairLoad();
        loader(pPltData->pRawData, offset, pPltData->szByte);
        cleanupLoad();
    }
}
