/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02008d34 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/func_02008d34.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200b86c(int a, int b, int c, int d, int e, int f, int g);
extern int func_02008d10();
extern int *data_020814fc[];
int func_02008d34(int a, int b, int c, int d) {
    func_0200b86c((int) data_020814fc[1], c, b, d, (int) func_02008d10, a, 1);
    return 6;
}
