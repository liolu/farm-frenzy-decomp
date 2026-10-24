/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200ecbc from projets/livly-garden/src/donor/func_0200ecbc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef short s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef enum NNSG2dAnimationPlayMode {
    NNS_G2D_ANIMATIONPLAYMODE_INVALID = 0
} NNSG2dAnimationPlayMode;
typedef enum NNSG2dAnimationElement {
    NNS_G2D_ANIMELEMENT_INDEX     = 0,
    NNS_G2D_ANIMELEMENT_INDEX_SRT = 1,
    NNS_G2D_ANIMELEMENT_INDEX_T   = 2
} NNSG2dAnimationElement;
typedef enum NNSG2dSRTControlType {
    NNS_G2D_SRTCONTROLTYPE_INVALID = 0,
    NNS_G2D_SRTCONTROLTYPE_SRT     = 1
} NNSG2dSRTControlType;
typedef struct NNSG2dAnimFrameData {
    void *pContent;
    u16 frames;
    u16 pad16;
} NNSG2dAnimFrame;
typedef struct NNSG2dAnimSequenceData {
    u16 numFrames;
    u16 loopStartFrameIdx;
    u32 animType;
    NNSG2dAnimationPlayMode playMode;
    NNSG2dAnimFrame *pAnmFrameArray;
} NNSG2dAnimSequence;
typedef struct NNSG2dAnimController {
    const NNSG2dAnimFrame *pCurrent;
    const NNSG2dAnimFrame *pActiveCurrent;
    BOOL bReverse;
    BOOL bActive;
    fx32 currentTime;
    fx32 speed;
    NNSG2dAnimationPlayMode overriddenPlayMode;
    const NNSG2dAnimSequence *pAnimSequence;
    u32 callbackFunctor[4];
} NNSG2dAnimController;
typedef struct NNSG2dAnimDataSRT {
    u16 index;
    u16 rotZ;
    fx32 sx;
    fx32 sy;
    s16 px;
    s16 py;
} NNSG2dAnimDataSRT;
typedef struct NNSG2dAnimDataT {
    u16 index;
    u16 pad_;
    s16 px;
    s16 py;
} NNSG2dAnimDataT;
typedef struct NNSG2dCellData {
    u16 numOAMAttrs;
    u16 cellAttr;
    void *pOamAttrArray;
} NNSG2dCellData;
typedef struct NNSG2dCellVramTransferData {
    u32 srcDataOffset;
    u32 szByte;
} NNSG2dCellVramTransferData;
typedef struct NNSG2dVramTransferData {
    u32 szByteMax;
    NNSG2dCellVramTransferData *pCellTransferDataArray;
} NNSG2dVramTransferData;
typedef struct NNSG2dCellDataBank {
    u16 numCells;
    u16 cellBankAttr;
    NNSG2dCellData *pCellDataArrayHead;
    int mappingMode;
    NNSG2dVramTransferData *pVramTransferData;
    void *pStringBank;
    void *pExtendedData;
} NNSG2dCellDataBank;
typedef struct NNSG2dSRTControl {
    u32 words[9];
} NNSG2dSRTControl;
typedef struct NNSG2dCellAnimation {
    NNSG2dAnimController animCtrl;
    const NNSG2dCellData *pCurrentCell;
    const NNSG2dCellDataBank *pCellDataBank;
    u32 cellTransferStateHandle;
    NNSG2dSRTControl srtCtrl;
} NNSG2dCellAnimation;
extern void *func_02012474(NNSG2dAnimController *pAnimCtrl);
extern const NNSG2dCellData *func_02011e5c(const NNSG2dCellDataBank *pBank, u16 index);
extern void func_02013414(NNSG2dSRTControl *pCtrl, NNSG2dSRTControlType type);
extern void func_020133b0(NNSG2dSRTControl *pCtrl, s16 x, s16 y);
extern void func_020133f4(NNSG2dSRTControl *pCtrl, fx32 x, fx32 y);
extern void func_020133d4(NNSG2dSRTControl *pCtrl, u16 rotZ);
extern void func_0201392c(u32 handle, u32 srcDataOffset, u32 szByte);
static inline NNSG2dAnimationElement NNSi_G2dGetAnimSequenceElementType(u32 animType) {
    return (NNSG2dAnimationElement) (animType & 0xff);
}
inline BOOL NNSi_G2dIsCellAnimVramTransferHandleValid(const NNSG2dCellAnimation *pCellAnim) {
    return *(const volatile u32 *) &pCellAnim->cellTransferStateHandle != 0xffffffff;
}
void func_0201344c(NNSG2dCellAnimation *pCellAnim) {
    const NNSG2dAnimDataSRT *pAnimResult = ((void *) 0);
    const NNSG2dCellDataBank *pCellBank  = ((void *) 0);

    (void) 0;
    (void) 0;

    if (pCellAnim->animCtrl.pActiveCurrent->frames == 0) {
        return;
    }
    pAnimResult = (const NNSG2dAnimDataSRT *) func_02012474(&pCellAnim->animCtrl);
    (void) 0;

    pAnimResult = (const NNSG2dAnimDataSRT *) func_02012474(&pCellAnim->animCtrl);
    pCellBank   = pCellAnim->pCellDataBank;
    (void) 0;

    pCellAnim->pCurrentCell = func_02011e5c(pCellBank, pAnimResult->index);
    (void) 0;

    {
        const NNSG2dAnimationElement elemType =
            NNSi_G2dGetAnimSequenceElementType(pCellAnim->animCtrl.pAnimSequence->animType);
        func_02013414(&pCellAnim->srtCtrl, NNS_G2D_SRTCONTROLTYPE_SRT);

        if (elemType != NNS_G2D_ANIMELEMENT_INDEX) {
            if (elemType == NNS_G2D_ANIMELEMENT_INDEX_T) {
                const NNSG2dAnimDataT *pAnmResT = (const NNSG2dAnimDataT *) pAnimResult;
                func_020133b0(&pCellAnim->srtCtrl, pAnmResT->px, pAnmResT->py);
            } else {
                func_020133f4(&pCellAnim->srtCtrl, pAnimResult->sx, pAnimResult->sy);
                func_020133d4(&pCellAnim->srtCtrl, pAnimResult->rotZ);
                func_020133b0(&pCellAnim->srtCtrl, pAnimResult->px, pAnimResult->py);
            }
        }
    }

    {
        NNSG2dVramTransferData *pVramTransferData = *(NNSG2dVramTransferData *volatile const *) &pCellBank->pVramTransferData;
        BOOL hasTransferData                      = (BOOL) (pVramTransferData != ((void *) 0));
        BOOL hasTransferDataBool                  = hasTransferData != 0;
        if (hasTransferDataBool && NNSi_G2dIsCellAnimVramTransferHandleValid(pCellAnim)) {
            const NNSG2dCellVramTransferData *pCellTransferData =
                &pVramTransferData->pCellTransferDataArray[pAnimResult->index];
            func_0201392c(pCellAnim->cellTransferStateHandle, pCellTransferData->srcDataOffset, pCellTransferData->szByte);
        }
    }
}
