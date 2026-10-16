/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Screen_ReadBlock from https://github.com/RonyxDumb/mkds src/arm9/02021f9c_Screen_ReadBlock.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
extern const u16(*ctrdgi_fl_maxtime);
typedef struct NNSG2dBinaryFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSG2dBinaryFileHeader;
typedef struct NNSG2dBinaryBlockHeader {
    u32 kind;
    u32 size;
} NNSG2dBinaryBlockHeader;
typedef struct NNSG2dScreenData {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
typedef struct NNSG2dScreenDataBlock {
    NNSG2dBinaryBlockHeader blockHeader;
    NNSG2dScreenData screenData;
} NNSG2dScreenDataBlock;
extern BOOL func_02011fb8(void *pNscrFile, NNSG2dScreenData **ppScrData);
extern NNSG2dBinaryBlockHeader *func_02011fec(NNSG2dBinaryFileHeader *pBinFileHeader, u32 signature);
#pragma thumb off
BOOL func_02011fb8(void *pNscrFile, NNSG2dScreenData **ppScrData) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    {
        NNSG2dBinaryFileHeader *pBinFile = (NNSG2dBinaryFileHeader *) pNscrFile;
        {
            NNSG2dScreenDataBlock *pBinBlk = (NNSG2dScreenDataBlock *) func_02011fec(pBinFile, (u32) 'SCRN');
            if (pBinBlk) {

                *ppScrData = &(pBinBlk->screenData);
                ((void) 0);
                ((void) 0);
                ((void) 0);
                ((void) 0);
                ((void) 0);
                ((void) 0);
                ((void) 0);
                ((void) 0)

                    ;
                ((void) 0)

                    ;

                return 1;
            } else {
                *ppScrData = 0;
                return 0;
            }
        }
    }
}
