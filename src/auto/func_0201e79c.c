#include "engine.h"
#include "m2c.h"

void func_02005774(void);
void func_02009498(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020098b8(M2C_UNK);
M2C_UNK func_020098d0(M2C_UNK);

extern M2C_UNK data_02093d58;
extern M2C_UNK data_02093daa;

void func_0201e79c(void) {
    if (M2C_FIELD(&data_02093d58, s32 *, 8) != 0) {
        return;
    }
    func_02009498(0, 4, (s32) &data_02093daa, 5);
    func_020098b8(2);
    if (func_020098d0(2) != 0) {
        func_02005774();
    }
    M2C_FIELD(&data_02093d58, s32 *, 8) = 1;
    M2C_FIELD(&data_02093d58, s16 *, 2) = 0;
    M2C_FIELD(&data_02093d58, s16 *, 0) = 0;
    M2C_FIELD(&data_02093d58, s16 *, 6) = 0;
}
