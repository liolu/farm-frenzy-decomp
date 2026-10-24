/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02010b1c from projets/livly-garden/src/donor/func_02010b1c.c (same code in another game of this workspace), reused by
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
extern int data_0207509c;
extern void func_02004c10(const void *startAddr, u32 nBytes);
extern void func_02005890(u32 dmaNo, const void *src, void *dest, u32 size);
extern void func_02005c64(const void *src, void *dest, u32 size);
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
void func_02014124(NNSG2dBGExtPlttSlot slot, const NNSG2dPaletteData *pPltData, const NNSG2dPaletteCompressInfo *pCmpInfo) {
    void *pPlttBase;

    func_02004c10(pPltData->pRawData, pPltData->szByte);

    if (slot <= NNS_G2D_BGEXTPLTTSLOT_MAIN3) {
        pPlttBase = ((void *) 0x05000000);
    } else {
        pPlttBase = ((void *) 0x05000400);
    }

    if (pCmpInfo != ((void *) 0)) {
        const u32 szOnePltt = GetPlttSize(pPltData);
        const int numIdx    = pCmpInfo->numPalette;
        int i               = 0;

        if (numIdx <= 0) {
            return;
        }

        do {
            const u32 offsetAddr = GetCompressedPlttOriginalIndex(pCmpInfo, i) * szOnePltt;
            const void *pSrc     = (u8 *) pPltData->pRawData + szOnePltt * i;

            if (data_0207509c != (-1)) {
                func_02005890(data_0207509c, pSrc, (u8 *) pPlttBase + offsetAddr, szOnePltt);
            } else {
                func_02005c64(pSrc, (u8 *) pPlttBase + offsetAddr, szOnePltt);
            }
            i++;
        } while (i < numIdx);
    } else {
        const u32 szByte     = pPltData->szByte;
        const void *pRawData = pPltData->pRawData;

        if (data_0207509c != (-1)) {
            func_02005890(data_0207509c, pRawData, pPlttBase, szByte);
        } else {
            func_02005c64(pRawData, pPlttBase, szByte);
        }
    }
}
