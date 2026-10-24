/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200e638 from projets/livly-garden/src/donor/func_0200e638.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
typedef volatile u32 REGType32v;
extern void func_02004c10(const void *startAddr, u32 nBytes);
typedef enum {
    GX_TEXSIZE_S8    = 0,
    GX_TEXSIZE_S16   = 1,
    GX_TEXSIZE_S32   = 2,
    GX_TEXSIZE_S64   = 3,
    GX_TEXSIZE_S128  = 4,
    GX_TEXSIZE_S256  = 5,
    GX_TEXSIZE_S512  = 6,
    GX_TEXSIZE_S1024 = 7
} GXTexSizeS;
typedef enum {
    GX_TEXSIZE_T8    = 0,
    GX_TEXSIZE_T16   = 1,
    GX_TEXSIZE_T32   = 2,
    GX_TEXSIZE_T64   = 3,
    GX_TEXSIZE_T128  = 4,
    GX_TEXSIZE_T256  = 5,
    GX_TEXSIZE_T512  = 6,
    GX_TEXSIZE_T1024 = 7
} GXTexSizeT;
typedef enum {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef enum {
    GX_OBJVRAMMODE_CHAR_2D      = (0 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_32K  = (1 << 4) | (0 << 20),
    GX_OBJVRAMMODE_CHAR_1D_64K  = (1 << 4) | (1 << 20),
    GX_OBJVRAMMODE_CHAR_1D_128K = (1 << 4) | (2 << 20),
    GX_OBJVRAMMODE_CHAR_1D_256K = (1 << 4) | (3 << 20)
} GXOBJVRamModeChar;
extern void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode);
extern void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode);
static inline void GX_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(REGType32v *) (0x04000000 + 0x000)) =
        (u32) ((*(REGType32v *) (0x04000000 + 0x000)) & ~(0x00300000 | 0x00000010) | mode);
}
static inline void GXS_SetOBJVRamModeChar(GXOBJVRamModeChar mode) {
    (*(REGType32v *) (0x04000000 + 0x1000)) =
        (u32) ((*(REGType32v *) (0x04000000 + 0x1000)) & ~(0x00300000 | 0x00000010) | mode);
}
extern void func_0200311c(const void *pSrc, u32 offset, u32 szByte);
extern void func_02003174(const void *pSrc, u32 offset, u32 szByte);
extern void func_02003594(void);
extern void func_020035f0(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void func_02003730(void);
typedef enum NNSG2dCharacterFmt {
    NNS_G2D_CHARACTER_FMT_CHAR,
    NNS_G2D_CHARACTER_FMT_BMP,
    NNS_G2D_CHARACTER_FMT_MAX
} NNSG2dCharacterFmt;
typedef struct NNSG2dCharacterData {
    u16 H;
    u16 W;
    GXTexFmt pixelFmt;
    GXOBJVRamModeChar mappingType;
    u32 characterFmt;
    u32 szByte;
    void *pRawData;
} NNSG2dCharacterData;
inline NNSG2dCharacterFmt NNSi_G2dGetCharacterFmtType(u32 characterFmt) {
    return (NNSG2dCharacterFmt) (0xFF & (characterFmt >> 0));
}
typedef enum NNS_G2D_VRAM_TYPE {
    NNS_G2D_VRAM_TYPE_3DMAIN = 0,
    NNS_G2D_VRAM_TYPE_2DMAIN = 1,
    NNS_G2D_VRAM_TYPE_2DSUB  = 2,
    NNS_G2D_VRAM_TYPE_2DBOTH = 3,
    NNS_G2D_VRAM_TYPE_MAX    = 3
} NNS_G2D_VRAM_TYPE;
typedef struct NNSG2dImageAttr {
    GXTexSizeS sizeS;
    GXTexSizeT sizeT;
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    GXTexPlttColor0 plttUse;
    GXOBJVRamModeChar mappingType;
} NNSG2dImageAttr;
typedef struct NNSG2dVRamLocation {
    u32 baseAddrOfVram[NNS_G2D_VRAM_TYPE_MAX];
} NNSG2dVRamLocation;
typedef struct NNSG2dImageProxy {
    NNSG2dVRamLocation vramLocation;
    NNSG2dImageAttr attr;
} NNSG2dImageProxy;
extern void func_02012e18(NNSG2dImageProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
static inline int GetPow_(u16 num) {
    switch (num) {
        case 1:
            return GX_TEXSIZE_S8;
        case 2:
            return GX_TEXSIZE_S16;
        case 4:
            return GX_TEXSIZE_S32;
        case 8:
            return GX_TEXSIZE_S64;
        case 16:
            return GX_TEXSIZE_S128;
        case 32:
            return GX_TEXSIZE_S256;
        default:
            ((void) 0);
            return GX_TEXSIZE_S8;
    }
}
static inline void CopyCharDataToImageAttr_(const NNSG2dCharacterData *pSrc, NNSG2dImageAttr *pDst) {
    if (pSrc->mappingType == GX_OBJVRAMMODE_CHAR_2D) {
        pDst->sizeS = (GXTexSizeS) (GetPow_(pSrc->W));
        pDst->sizeT = (GXTexSizeT) (GetPow_(pSrc->H));
    } else {
        ((void) 0);
        pDst->sizeS = (GXTexSizeS) pSrc->W;
        pDst->sizeT = (GXTexSizeT) pSrc->H;
    }
    pDst->fmt          = pSrc->pixelFmt;
    pDst->bExtendedPlt = 0;
    pDst->plttUse      = GX_TEXPLTTCOLOR0_TRNS;
    pDst->mappingType  = pSrc->mappingType;
}
static inline void DoLoadingToVram_(const NNSG2dCharacterData *pSrcData, u32 baseAddr, NNS_G2D_VRAM_TYPE type) {
    const NNSG2dCharacterFmt charFmt = NNSi_G2dGetCharacterFmtType(pSrcData->characterFmt);
    ((void) 0);
    func_02004c10(pSrcData->pRawData, pSrcData->szByte);
    switch (type) {
        case NNS_G2D_VRAM_TYPE_3DMAIN:
            func_02003594();
            func_020035f0((void *) pSrcData->pRawData, baseAddr, pSrcData->szByte);
            func_02003730();
            break;
        case NNS_G2D_VRAM_TYPE_2DMAIN:
            func_0200311c((void *) pSrcData->pRawData, baseAddr, pSrcData->szByte);
            break;
        case NNS_G2D_VRAM_TYPE_2DSUB:
            func_02003174((void *) pSrcData->pRawData, baseAddr, pSrcData->szByte);
            break;
        default:
    }
}
static inline void SetOBJVRamModeCharacterMapping_(NNS_G2D_VRAM_TYPE vramType, GXOBJVRamModeChar vramMode) {
    switch (vramType) {
        case NNS_G2D_VRAM_TYPE_3DMAIN:
            break;
        case NNS_G2D_VRAM_TYPE_2DMAIN:
            GX_SetOBJVRamModeChar(vramMode);
            break;
        case NNS_G2D_VRAM_TYPE_2DSUB:
            GXS_SetOBJVRamModeChar(vramMode);
            break;
        default:
    }
}
static inline void SetupImageProxyPrams_(const NNSG2dCharacterData *pSrcData, u32 baseAddr, NNS_G2D_VRAM_TYPE type,
                                         NNSG2dImageProxy *pImgProxy) {
    CopyCharDataToImageAttr_(pSrcData, &pImgProxy->attr);
    func_02012e18(pImgProxy, type, baseAddr);
}
extern void func_02012e18(NNSG2dImageProxy *pImg, NNS_G2D_VRAM_TYPE type, u32 addr);
void func_02012e60(const NNSG2dCharacterData *pSrcData, u32 baseAddr, NNS_G2D_VRAM_TYPE type, NNSG2dImageProxy *pImgProxy) {

    SetOBJVRamModeCharacterMapping_(type, pSrcData->mappingType);

    DoLoadingToVram_(pSrcData, baseAddr, type);

    SetupImageProxyPrams_(pSrcData, baseAddr, type, pImgProxy);
}
