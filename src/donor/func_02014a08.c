/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02011400 from projets/livly-garden/src/donor/func_02011400.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
extern void func_02005c64(const void *srcp, void *destp, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    func_02005c64(src, dest, size);
}
typedef u16 GXScrFmtText;
typedef struct NNSG2dScreenData {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
void func_02014a08(void *pScreenDst, const NNSG2dScreenData *pScnData, int srcX, int srcY, int dstX, int dstY, int dstW,
                   int width, int height) {

    {
        const int src_y_end      = srcY + height;
        const int srcW           = pScnData->screenWidth / 8;
        const u32 szLine         = sizeof(GXScrFmtText) * width;
        const GXScrFmtText *pSrc = (const GXScrFmtText *) pScnData->rawData;
        GXScrFmtText *pDst       = (GXScrFmtText *) pScreenDst;
        int y;

        pSrc += srcY * srcW + srcX;
        pDst += dstY * dstW + dstX;

        for (y = srcY; y < src_y_end; y++) {
            MI_CpuCopy16(pSrc, pDst, szLine);
            pSrc += srcW;
            pDst += dstW;
        }
    }
}
