/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02073c04 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_stream.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkList {
    void *head;
    void *tail;
    u16 numObjects;
    u16 offset;
} UnkList;
typedef struct UnkLink {
    void *prev;
    void *next;
} UnkLink;
extern void func_02011128(UnkList *list, u16 offset);
typedef struct UnkSleepCallbackInfo {
    void (*func)(void *);
    void *arg;
    struct UnkSleepCallbackInfo *next;
} UnkSleepCallbackInfo;
typedef void (*UnkStrmCallback)(int status, int chNum, void **buffer, u32 len, int format, void *arg);
typedef struct UnkSndStrm {
    UnkLink link;
    UnkSleepCallbackInfo preSleepInfo;
    UnkSleepCallbackInfo postSleepInfo;
    int format;
    BOOL active : 1;
    BOOL started : 1;
    u32 bufSize;
    int interval;
    UnkStrmCallback callback;
    void *arg;
    int curBlock;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int chNum;
    u8 chNo[16];
} UnkSndStrm;
extern BOOL data_02086424;
extern UnkList data_02086428;
extern void func_020175bc(void *arg);
extern void func_02017608(void *arg);
void func_020170ac(UnkSndStrm *strm) {
    if (!data_02086424) {
        func_02011128(&data_02086428, 0);
        data_02086424 = 1;
    }

    strm->preSleepInfo.func  = func_020175bc;
    strm->preSleepInfo.arg   = strm;
    strm->postSleepInfo.func = func_02017608;
    strm->postSleepInfo.arg  = strm;
    strm->chBitMask          = 0;
    strm->chNum              = 0;
    strm->active             = 0;
    strm->started            = 0;
}
void func_020175bc(void *arg);
void func_02017608(void *arg);
