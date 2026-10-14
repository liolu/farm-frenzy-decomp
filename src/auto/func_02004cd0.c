#include "engine.h"
#include "m2c.h"

M2C_UNK func_02004e68(M2C_UNK);
M2C_UNK func_02004f4c(M2C_UNK);
void func_02004ff4(M2C_UNK, M2C_UNK);
void func_02005008(M2C_UNK, M2C_UNK);

extern s32 data_0207f80c;

void func_02004cd0(void) {
    if (data_0207f80c != 0) {
        return;
    }
    data_0207f80c = 1;
    func_02004ff4(0, func_02004e68(0));
    func_02005008(0, func_02004f4c(0));
    func_02005008(2, 0);
    func_02004ff4(2, 0);
    func_02004ff4(3, func_02004e68(3));
    func_02005008(3, func_02004f4c(3));
    func_02004ff4(4, func_02004e68(4));
    func_02005008(4, func_02004f4c(4));
    func_02004ff4(5, func_02004e68(5));
    func_02005008(5, func_02004f4c(5));
    func_02004ff4(6, func_02004e68(6));
    func_02005008(6, func_02004f4c(6));
}
