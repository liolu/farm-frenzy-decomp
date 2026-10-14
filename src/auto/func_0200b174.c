#include "engine.h"
#include "m2c.h"

extern void *data_02081660;

s32 func_0200b174(void) {
    return M2C_FIELD(data_02081660, s32 *, 0x1C);
}
