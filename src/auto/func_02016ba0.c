/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207364c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player_init.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList data_02085b58;
extern const s16 data_02053cd4[];
extern void *func_020112d4(UnkFndList *list, void *object);
extern u32 func_02006b90(void);
extern BOOL func_020068b4(u32 tag);
extern void func_02016fd8(UnkSndSeqPlayer *player);
extern void func_0201a4f8(UnkSndFader *fader);
extern int func_0201a4c4(UnkSndFader *fader);
extern BOOL func_0201a510(UnkSndFader *fader);
extern void func_02006070(u32 playerNo, int volume);
extern void func_02016f38(UnkSndSeqPlayer *player);
extern void func_02006050(u32 playerNo);
void func_02016ba0(void) {
    u32 status              = func_02006b90();
    UnkSndSeqPlayer *player = func_020112d4(&data_02085b58, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_020112d4(&data_02085b58, player);

        if (!player->startedFlag) {
            if (func_020068b4(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_02016fd8(player);
        } else {
            func_0201a4f8(&player->fader);
            seqVol   = data_02053cd4[player->volume];
            initVol  = data_02053cd4[player->initVolume];
            groupVol = data_02053cd4[player->player->volume];
            volume   = data_02053cd4[func_0201a4c4(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_02006070(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_0201a510(&player->fader)) {
                func_02016f38(player);
            }
            if (player->updateFlag) {
                func_02006050(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
