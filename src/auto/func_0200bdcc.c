#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200bdf4(void);
M2C_UNK func_0200be0c(void);

s32 func_0200bdcc(void) {
    if ((func_0200be0c() != 0) && (func_0200bdf4() == 0)) {
        return 1;
    }
    return 0;
}
