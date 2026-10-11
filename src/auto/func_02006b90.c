#include "m2c.h"
#include "engine.h"

void func_02004bd8(M2C_UNK, M2C_UNK);

extern void *data_02081460;

s32 func_02006b90(void) {
    func_02004bd8((s32) (data_02081460 + 4), 4);
    return M2C_FIELD(data_02081460, s32 *, 4);
}
