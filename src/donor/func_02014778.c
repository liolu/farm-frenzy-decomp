/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02011170 from projets/livly-garden/src/donor/func_02011170.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef u16 GXScrFmtText;
typedef struct NNSG2dScreenData {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
static inline int CalcTextScreenOffset(int x, int y, int w, int h) {
    const int x_blk  = x / 32;
    const int y_blk  = y / 32;
    const int x_char = x % 32;
    const int y_char = y % 32;
    const int w_blk  = w / 32;
    const int h_blk  = h / 32;
    const int blk_w  = (x_blk == w_blk) ? (w % 32) : 32;
    const int blk_h  = (y_blk == h_blk) ? (h % 32) : 32;

    return w * 32 * y_blk + 32 * blk_h * x_blk + blk_w * y_char + x_char;
}
void func_02014778(void *pScreenDst, const NNSG2dScreenData *pScreenData, int srcX, int srcY, int dstX, int dstY, int dstW,
                   int dstH, int width, int height) {
    {
        const int src_x_end          = srcX + width;
        const int src_y_end          = srcY + height;
        const int src_next_offset    = pScreenData->screenWidth - width;
        const int dst_next_offset    = dstW - width;
        const u32 szLine             = sizeof(GXScrFmtText) * width;
        const int srcW               = pScreenData->screenWidth / 8;
        const int srcH               = pScreenData->screenHeight / 8;
        const GXScrFmtText *pSrcBase = (const GXScrFmtText *) pScreenData->rawData;
        GXScrFmtText *pDstBase       = (GXScrFmtText *) pScreenDst;
        int sx, sy;
        int dx, dy;

        for (sy = srcY, dy = dstY; sy < src_y_end; sy++, dy++) {
            for (sx = srcX, dx = dstX; sx < src_x_end; sx++, dx++) {
                const GXScrFmtText *pSrc = pSrcBase + CalcTextScreenOffset(sx, sy, srcW, srcH);
                GXScrFmtText *pDst       = pDstBase + CalcTextScreenOffset(dx, dy, dstW, dstH);
                *pDst                    = *pSrc;
            }
        }
    }
}
