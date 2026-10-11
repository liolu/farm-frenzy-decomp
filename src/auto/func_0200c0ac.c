#include "m2c.h"
#include "engine.h"

void func_020070c4(void);
void func_020071d0(M2C_UNK, M2C_UNK);
M2C_UNK func_0200721c(M2C_UNK, M2C_UNK);
void func_0200bd94(void);
void func_0200c064(M2C_UNK);
void func_0200c160(void);
void func_0200c354(M2C_UNK, M2C_UNK);
void func_0200c380(M2C_UNK, M2C_UNK);
void func_0200c400(void);
void func_0200c414(M2C_UNK);

extern M2C_UNK data_02081ee0;
extern M2C_UNK data_02081fc0;

void func_0200c0ac(void) {
    if (M2C_FIELD(&data_02081ee0, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_02081ee0, s32 *, 8) = 1;
    func_0200bd94();
    M2C_FIELD(&data_02081ee0, s32 *, 0xC) = 0;
    func_020070c4();
    do {

    } while (func_0200721c(0xD, 1) == 0);
    func_020071d0(0xD, (s32) func_0200c354);
    func_0200c160();
    func_020071d0(0xD, 0);
    func_020071d0(0xD, (s32) func_0200c380);
    M2C_FIELD(&data_02081ee0, s32 *, 0x18) = 0;
    func_0200c414((s32) &data_02081fc0);
    func_020071d0(0x11, (s32) func_0200c400);
    func_0200c064(0);
}
