/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02001df8 from projets/blue-dragon-awakened-shadow/src/donor/func_02001df8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed long s32;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef struct MtxFx43 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
extern void func_02001800(const VecFx32 *src, VecFx32 *dst);
extern void func_0200177c(const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern fx32 func_02001740(const VecFx32 *a, const VecFx32 *b);
void func_02001340(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx) {
    VecFx32 vLook, vRight, vUp;

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;

    func_02001800(&vLook, &vLook);
    func_0200177c(camUp, &vLook, &vRight);
    func_02001800(&vRight, &vRight);
    func_0200177c(&vLook, &vRight, &vUp);

    mtx->_00 = vRight.x;
    mtx->_01 = vUp.x;
    mtx->_02 = vLook.x;
    mtx->_10 = vRight.y;
    mtx->_11 = vUp.y;
    mtx->_12 = vLook.y;
    mtx->_20 = vRight.z;
    mtx->_21 = vUp.z;
    mtx->_22 = vLook.z;
    mtx->_30 = -func_02001740(camPos, &vRight);
    mtx->_31 = -func_02001740(camPos, &vUp);
    mtx->_32 = -func_02001740(camPos, &vLook);
}
