#include "engine.h"
#include "m2c.h"

void func_02012720(void);
void func_020127e0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02012dfc(M2C_UNK);
void func_02012e28(M2C_UNK);

extern M2C_UNK data_02087a0c;
extern M2C_UNK data_02087a20;
extern M2C_UNK data_02087a34;
extern M2C_UNK data_02087a48;
extern M2C_UNK data_02087a80;
extern M2C_UNK data_02087a9c;
extern M2C_UNK data_02087ac0;
extern M2C_UNK data_02087ae4;

void func_0201d7a4(void) {
    func_02012720();
    func_020127e0((s32) &data_02087a48, 0, 0x80, 0);
    func_020127e0((s32) &data_02087a80, 0, 0x80, 1);
    func_02012dfc((s32) &data_02087ae4);
    func_02012e28((s32) &data_02087a0c);
    func_02012dfc((s32) &data_02087ac0);
    func_02012e28((s32) &data_02087a20);
    func_02012dfc((s32) &data_02087a9c);
    func_02012e28((s32) &data_02087a34);
}
