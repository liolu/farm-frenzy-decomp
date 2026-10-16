/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_ScaleApply22 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mtx/auto/MTX_ScaleApply22.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct {
    int _00, _01, _10, _11;
} MtxFx22;
void func_0200129c(const MtxFx22 *src, MtxFx22 *dst, int sx, int sy) {
    dst->_00 = (int) (((long long) sx * src->_00) >> 12);
    dst->_01 = (int) (((long long) sx * src->_01) >> 12);
    dst->_10 = (int) (((long long) sy * src->_10) >> 12);
    dst->_11 = (int) (((long long) sy * src->_11) >> 12);
}
