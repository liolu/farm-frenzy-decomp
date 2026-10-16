/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02004984 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02004984.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200550c(void);
extern void func_02005520(int state);
extern void func_020045b4(void *queue);
extern void func_02004604(void *queue);
extern long long func_020107ac(int a, int b);
int func_02004984(char *q, void **out, int flags) {
    int enabled = func_0200550c();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_02005520(enabled);
            return 0;
        }
        func_020045b4(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_020107ac(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_02004604(q);
    func_02005520(enabled);
    return 1;
}
