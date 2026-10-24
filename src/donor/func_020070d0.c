/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PXI_InitFifo from projets/blue-dragon-awakened-shadow/src/donor/PXI_InitFifo.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_0200550c(void);
extern u32 func_02005520(u32 state);
extern void func_02003bdc(u32 mask);
extern void func_02003a38(u32 mask, void *handler);
extern u32 func_02003b7c(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_020070d0(void);
extern void func_020072c8(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_02081464;
extern PxiCallback data_02081468[32];
void func_020070d0(void) {
    u32 enabled = func_0200550c();
    s32 i;

    if (!data_02081464) {
        data_02081464                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_02081468[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        func_02003bdc(0x40000);
        func_02003a38(0x40000, func_020072c8);
        func_02003b7c(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    func_02005520(enabled);
}
extern void func_020072c8(void);
