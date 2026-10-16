/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006660 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02006660.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0207f920;
extern SNDCommand *data_0207f944[8];
extern SNDCommand data_0207fc00[0x100];
extern int func_0200550c(void);
extern void func_02005520(int state);
extern void func_02004c10(void *address, unsigned int size);
extern SNDCommand *func_02006490(int block);
extern int func_02007240(int channel, unsigned int data, int err);
extern void func_02006a1c(void);
int func_02006660(unsigned int flags) {
    int state = func_0200550c();

    if (data_0207f920.reservedHead == 0) {
        func_02005520(state);
        return 1;
    }

    if (data_0207f920.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_02005520(state);
            return 0;
        }
        do {
            func_02006490(1);
        } while (data_0207f920.sentBlockCount >= 8);
        if (data_0207f920.reservedHead == 0) {
            func_02005520(state);
            return 1;
        }
    }

    func_02004c10(data_0207fc00, sizeof(data_0207fc00));

    if (func_02007240(7, (unsigned int) data_0207f920.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_02005520(state);
            return 0;
        }
        while (data_0207f920.sentBlockCount >= 8 || func_02007240(7, (unsigned int) data_0207f920.reservedHead, 0) < 0) {
            func_02005520(state);
            func_02006490(0);
            state = func_0200550c();
            func_02004c10(data_0207fc00, sizeof(data_0207fc00));
            if (data_0207f920.reservedHead == 0) {
                func_02005520(state);
                return 1;
            }
        }
    }

    data_0207f944[data_0207f920.sentRingIndex] = data_0207f920.reservedHead;
    data_0207f920.sentRingIndex++;
    if (data_0207f920.sentRingIndex > 8) {
        data_0207f920.sentRingIndex = 0;
    }
    data_0207f920.reservedHead = 0;
    data_0207f920.reservedTail = 0;
    data_0207f920.sentBlockCount++;
    data_0207f920.nextTag++;
    func_02005520(state);

    if ((flags & 2) != 0) {
        func_02006a1c();
    }
    return 1;
}
