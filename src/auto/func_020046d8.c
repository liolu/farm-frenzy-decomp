/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0200550c(void);
extern void func_02005520(int);
extern void func_020040f0(void *);
extern void func_02004198(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_0207f590;
extern Node data_0207f5c4;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_020046d8(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_0207f590.head;
    intr = func_0200550c();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_0207f5c4) {
        func_02005520(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_0207f590.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_020040f0(target);
        func_02004198();
    }
    func_02005520(intr);
    return 1;
}
