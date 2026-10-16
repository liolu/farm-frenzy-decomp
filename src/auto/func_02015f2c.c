/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Text_DrawAlignedLines from https://github.com/Yokimitsuro/khdays-decomp libs/nns/g2d/calls/Text_DrawAlignedLines.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct {
    signed char dx, dy;
} TextDir;
extern int func_02014e3c(int font, int opts, int s, int *outNext);
extern void func_02015e78(int *ctx, int x, int y, int p5, int s, int *pNext, TextDir dir);
void func_02015f2c(int *ctx, int x, int y, int width, int p5, unsigned int flags, int str, TextDir dir) {
    int step  = ctx[3] + *(signed char *) (*(int *) ctx[1] + 1);
    int stepx = step * -dir.dy;
    int stepy = step * dir.dx;
    int px, py;
    int ox, oy;
    int s = str;

    if (str != 0) {
        ox = 0;
        oy = 0;
        do {
            px = x + ox;
            py = y + oy;
            if (flags & 0x800) {
                int w = func_02014e3c(ctx[1], ctx[2], s, 0);
                w     = width - w;
                px += w * dir.dx;
                py += w * dir.dy;
            } else if (flags & 0x400) {
                int w = func_02014e3c(ctx[1], ctx[2], s, 0);
                w     = (width + 1) / 2 - (w + 1) / 2;
                px += w * dir.dx;
                py += w * dir.dy;
            }
            func_02015e78(ctx, px, py, p5, s, &s, dir);
            ox += stepx;
            oy += stepy;
        } while (s != 0);
    }
}
