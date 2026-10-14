#include "engine.h"
#include "m2c.h"

void func_0200557c(M2C_UNK);
void func_02005774(void);
void func_02005ac0(M2C_UNK);
M2C_UNK func_02009f60(void);
void func_0200bd44(M2C_UNK, M2C_UNK);

void func_0200bc58(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    func_02005ac0(0);
    func_02005ac0(1);
    func_02005ac0(2);
    func_02005ac0(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_02009f60();
        if (var_r0 == 4) {
            do {
                func_0200557c(0xA3A47);
                var_r0 = func_02009f60();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_0200bd44(1, 1);
    }
    func_02005774();
}
