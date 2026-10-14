#include "engine.h"
#include "m2c.h"

void func_020012f4(M2C_UNK);
void func_02001318(M2C_UNK);
void func_02001448(M2C_UNK);

extern M2C_UNK data_020834d0;
extern M2C_UNK data_020834d8;
extern M2C_UNK data_0208351c;
extern M2C_UNK data_0208358c;

void func_020165d8(void) {
    M2C_FIELD(&data_020834d0, s32 *, 0)    = 0x17101610;
    M2C_FIELD(&data_020834d0, s32 *, 4)    = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x48) = 2;
    M2C_FIELD(&data_020834d0, s32 *, 0x7C) = 0x32323232;
    M2C_FIELD(&data_020834d0, s32 *, 0x90) = 0x60293130;
    M2C_FIELD(&data_020834d0, s32 *, 0xA4) = 0x33333333;
    M2C_FIELD(&data_020834d0, s32 *, 0xB8) = 0x2A1B19;
    func_02001318((s32) &data_0208351c);
    func_02001448((s32) &data_020834d8);
    M2C_FIELD(&data_020834d0, s32 *, 0x80) = 0x2D8B62D8;
    M2C_FIELD(&data_020834d0, s32 *, 0x84) = 0x40000200;
    M2C_FIELD(&data_020834d0, s32 *, 0x88) = -0x7FFFFE01;
    M2C_FIELD(&data_020834d0, s32 *, 0x8C) = 0xC0080000;
    M2C_FIELD(&data_020834d0, s32 *, 0x94) = 0x4210C210;
    M2C_FIELD(&data_020834d0, s32 *, 0x98) = 0x4210C210;
    M2C_FIELD(&data_020834d0, s32 *, 0x9C) = 0x1F008F;
    M2C_FIELD(&data_020834d0, s32 *, 0xA0) = -0x40010000;
    M2C_FIELD(&data_020834d0, s32 *, 0xA8) = 0x7FFF;
    M2C_FIELD(&data_020834d0, s32 *, 0xAC) = 0x4000001F;
    M2C_FIELD(&data_020834d0, s32 *, 0xB0) = 0x800003E0;
    M2C_FIELD(&data_020834d0, s32 *, 0xB4) = -0x3FFF8400;
    M2C_FIELD(&data_020834d0, s32 *, 0xE0) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0xE4) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0xE8) = 0;
    func_020012f4((s32) &data_0208358c);
    M2C_FIELD(&data_020834d0, s32 *, 0xEC)  = 0x1000;
    M2C_FIELD(&data_020834d0, s32 *, 0xF0)  = 0x1000;
    M2C_FIELD(&data_020834d0, s32 *, 0xF4)  = 0x1000;
    M2C_FIELD(&data_020834d0, s32 *, 0xF8)  = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0xFC)  = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x248) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x244) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x240) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x254) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x24C) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x250) = 0x1000;
    M2C_FIELD(&data_020834d0, s32 *, 0x25C) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x258) = 0;
    M2C_FIELD(&data_020834d0, s32 *, 0x260) = -0x1000;
}
