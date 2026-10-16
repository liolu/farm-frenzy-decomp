/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004198 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02004198.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020048ac(OSContext *context);
extern void func_020048f8(OSContext *context);
extern int func_02005570(void);
extern void *func_02004694(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0207f5b4;
extern struct Globals data_0207f590;
void func_02004198(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0207f590.rescheduleCount != 0) {
        return;
    }

    info = &data_0207f5b4;
    if (data_0207f590.irqDepth != 0 || func_02005570() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0207f590.currentThreadPtr;
    cur    = *curPtr;
    next   = func_02004694();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020048ac((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0207f590.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0207f590.currentThread = next;
    func_020048f8((OSContext *) next);
}
