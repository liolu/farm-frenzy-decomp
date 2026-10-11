#include "m2c.h"
#include "engine.h"

void func_02004a28(M2C_UNK);
void func_020063bc(void);
void func_02006acc(void);

extern s32 data_0207f904;
extern M2C_UNK data_0207f908;

void func_0200635c(void) {
    if (data_0207f904 != 0) {
        return;
    }
    data_0207f904 = 1;
    func_02004a28((s32) &data_0207f908);
    func_020063bc();
    func_02006acc();
}
