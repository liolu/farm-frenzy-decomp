#include "engine.h"
#include "m2c.h"

void func_02005c3c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_020824e4;
extern M2C_UNK data_020825e4;
extern M2C_UNK data_020829e4;
extern M2C_UNK data_02082a24;
extern M2C_UNK data_02082b24;
extern M2C_UNK data_02082f24;
extern M2C_UNK data_02082f64;
extern M2C_UNK data_02083064;
extern M2C_UNK data_02083464;

void func_02012720(void) {
    func_02005c3c(0xC0, (s32) &data_020825e4, 0x400);
    func_02005c3c(0xC0, (s32) &data_02082b24, 0x400);
    func_02005c3c(0xC0, (s32) &data_02083064, 0x400);
    func_02005c3c(0xFFFF, (s32) &data_020824e4, 0x100);
    func_02005c3c(0xFFFF, (s32) &data_02082a24, 0x100);
    func_02005c3c(0xFFFF, (s32) &data_02082f64, 0x100);
    func_02005c3c(0xFFFF, (s32) &data_020829e4, 0x40);
    func_02005c3c(0xFFFF, (s32) &data_02082f24, 0x40);
    func_02005c3c(0xFFFF, (s32) &data_02083464, 0x40);
}
