/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02013484 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/nns/calls/func_02013484.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct NNSG2dScreenData {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
typedef enum NNSG2dScreenFormat {
    NNS_G2D_SCREENFORMAT_TEXT,
    NNS_G2D_SCREENFORMAT_AFFINE,
    NNS_G2D_SCREENFORMAT_AFFINEEXT
} NNSG2dScreenFormat;
extern void func_02014778(void *pScreenDst, const NNSG2dScreenData *pScreenData, int srcX, int srcY, int dstX, int dstY,
                          int dstW, int dstH, int width, int height);
extern void func_020149a0(void *pScreenDst, const NNSG2dScreenData *pScreenData, int srcX, int srcY, int dstX, int dstY,
                          int dstW, int width, int height);
extern void func_02014a08(void *pScreenDst, const NNSG2dScreenData *pScreenData, int srcX, int srcY, int dstX, int dstY,
                          int dstW, int width, int height);
void func_02014b4c(void *pScreenDst, const NNSG2dScreenData *pScreenData, int srcX, int srcY, int dstX, int dstY, int dstW,
                   int dstH, int width, int height) {
    if (dstX < 0) {
        const int adj = -dstX;
        srcX += adj;
        width -= adj;
        dstX = 0;
    }
    if (dstY < 0) {
        const int adj = -dstY;
        srcY += adj;
        height -= adj;
        dstY = 0;
    }
    if (dstX + width > dstW) {
        const int adj = (dstX + width) - dstW;
        width -= adj;
    }
    if (dstY + height > dstH) {
        const int adj = (dstY + height) - dstH;
        height -= adj;
    }
    if (srcX < 0) {
        const int adj = -srcX;
        dstX += adj;
        width -= adj;
        srcX = 0;
    }
    if (srcY < 0) {
        const int adj = -srcY;
        dstY += adj;
        height -= adj;
        srcY = 0;
    }
    if (srcX + width > pScreenData->screenWidth / 8) {
        const int adj = (srcX + width) - (pScreenData->screenWidth / 8);
        width -= adj;
    }
    if (srcY + height > pScreenData->screenHeight / 8) {
        const int adj = (srcY + height) - (pScreenData->screenHeight / 8);
        height -= adj;
    }

    if (width <= 0 || height <= 0) {
        return;
    }

    switch (pScreenData->screenFormat) {
        case NNS_G2D_SCREENFORMAT_TEXT:
            func_02014778(pScreenDst, pScreenData, srcX, srcY, dstX, dstY, dstW, dstH, width, height);
            break;
        case NNS_G2D_SCREENFORMAT_AFFINE:
            func_020149a0(pScreenDst, pScreenData, srcX, srcY, dstX, dstY, dstW, width, height);
            break;
        case NNS_G2D_SCREENFORMAT_AFFINEEXT:
            func_02014a08(pScreenDst, pScreenData, srcX, srcY, dstX, dstY, dstW, width, height);
            break;
        default:
            break;
    }
}
