/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006628 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_02006628.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200550c(void);
extern void func_02005520(int state);
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
void func_02006628(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_0200550c();
    tail  = data_0207f920.reservedTail;

    if (tail == 0) {
        data_0207f920.reservedHead = command;
        data_0207f920.reservedTail = command;
    } else {
        tail->next                 = command;
        data_0207f920.reservedTail = command;
    }
    command->next = 0;
    func_02005520(state);
}
