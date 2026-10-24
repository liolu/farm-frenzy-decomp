/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200e46c from projets/livly-garden/src/donor/func_0200e46c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
extern void func_02005c98(u32 data, void *destp, u32 size);
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    ((void) 0);
    ((void) 0);

    func_02005c98(data, dest, size);
}
typedef s32 fx32;
extern u32 data_0207509c;
extern void func_02004bd8(void *startAddr, u32 nBytes);
extern void func_020057a0(u32 dmaNo, void *dest, u32 data, u32 size);
extern u32 GX_GetDefaultDMA(void);
static inline u32 GX_GetDefaultDMA(void) {
    return data_0207509c;
}
typedef struct {
    union {
        u32 attr01;
        struct {
            u16 attr0;
            u16 attr1;
        };
        struct {
            u32 y : 8;
            u32 rsMode : 2;
            u32 objMode : 2;
            u32 mosaic : 1;
            u32 colorMode : 1;
            u32 shape : 2;

            u32 x : 9;
            u32 rsParam : 5;
            u32 size : 2;
        };
        struct {
            u32 _0 : 28;
            u32 flipH : 1;
            u32 flipV : 1;
            u32 _1 : 2;
        };
    };
    union {
        struct {
            u16 attr2;
            u16 _3;
        };
        u32 attr23;
        struct {
            u32 charNo : 10;
            u32 priority : 2;
            u32 cParam : 4;
            u32 _2 : 16;
        };
    };
} GXOamAttr;
extern const u16(*ctrdgi_fl_maxtime);
typedef enum NNSG2dOamType {
    NNS_G2D_OAMTYPE_MAIN = 0,
    NNS_G2D_OAMTYPE_SUB,
    NNS_G2D_OAMTYPE_SOFTWAREEMULATION,
    NNS_G2D_OAMTYPE_INVALID,
    NNS_G2D_OAMTYPE_MAX
} NNSG2dOamType;
typedef struct NNSG2dOAMManageArea {
    u16 fromIdx;
    u16 toIdx;
    u16 currentIdx;
} NNSG2dOAMManageArea;
typedef struct NNSG2dOamManagerInstance {
    NNSG2dOamType type;
    NNSG2dOAMManageArea managedAttrArea;
    NNSG2dOAMManageArea managedAffineArea;
    u16 GUID;
    u16 pad16_;
    BOOL bFastTransferEnable;
    fx32 spriteZoffsetStep;
} NNSG2dOamManagerInstance;
extern void func_02012cd4(NNSG2dOamManagerInstance *pMan);
inline void NNSi_G2dDmaFill32(u32 dmaNo, void *dest, u32 data, u32 size) {
    if (dmaNo != ((u32) ~0)) {
        func_020057a0(dmaNo, dest, data, size);
    } else {
        MI_CpuFill32(dest, data, size);
    }
}
typedef struct OamAttributeCache {
    u16 reservationTable[128];
    GXOamAttr oamBuffer[128];
} OamAttributeCache;
typedef struct OamAffineCache {
    u16 reservationTable[32];
} OamAffineCache;
typedef struct OamCache {
    OamAttributeCache attributeCache;
    OamAffineCache affineCache;
} OamCache;
extern OamCache data_020824e4[3];
static inline BOOL IsManageAreaValid_(const NNSG2dOAMManageArea *pArea) {
    ((void) 0);

    return (BOOL) ((pArea->currentIdx <= pArea->toIdx + 1) && (pArea->fromIdx <= pArea->toIdx));
}
static inline OamCache *GetOamCachePtr_(NNSG2dOamType type) {
    ((void) 0);
    return &data_020824e4[type];
}
static inline GXOamAttr *GetOamBufferPtr_(NNSG2dOamType type, u16 index) {
    ((void) 0);
    {
        OamCache *pOamCache = GetOamCachePtr_(type);
        ((void) 0);

        return pOamCache->attributeCache.oamBuffer + index;
    }
}
static inline GXOamAttr *GetOamFromPtr_(NNSG2dOamManagerInstance *pMan) {
    ((void) 0);
    {
        GXOamAttr *pFrom = GetOamBufferPtr_(pMan->type, pMan->managedAttrArea.fromIdx);
        ((void) 0);

        return pFrom;
    }
}
static inline u32 GetSizeOfManageArea_(const NNSG2dOAMManageArea *pArea) {
    ((void) 0);

    if (IsManageAreaValid_(pArea)) {
        return (u32) (sizeof(GXOamAttr) * (u16) (pArea->toIdx - pArea->fromIdx + 1));
    } else {
        return 0;
    }
}
static inline void ResetOam_(NNSG2dOamType type, u16 fromIdx, u16 toIdx) {
    GXOamAttr *pFrom  = GetOamBufferPtr_(type, fromIdx);
    const u16 numArea = (u16) (toIdx - fromIdx + 1);
    u16 i;

    for (i = 0; i < numArea; i++) {
        *((u16 *) pFrom) = 192;
        pFrom++;
    }
}
void func_02012cd4(NNSG2dOamManagerInstance *pMan) {
    ((void) 0);

    {
        if (pMan->bFastTransferEnable) {
            const u32 szByte = GetSizeOfManageArea_(&pMan->managedAttrArea);
            void *pData      = GetOamFromPtr_(pMan);
            ((void) 0);

            func_02004bd8(pData, szByte);
            NNSi_G2dDmaFill32(GX_GetDefaultDMA(), pData, 192, szByte);

        } else {
            ResetOam_(pMan->type, pMan->managedAttrArea.fromIdx, pMan->managedAttrArea.toIdx);
        }
    }

    {
        pMan->managedAttrArea.currentIdx   = pMan->managedAttrArea.fromIdx;
        pMan->managedAffineArea.currentIdx = pMan->managedAffineArea.fromIdx;
    }
}
