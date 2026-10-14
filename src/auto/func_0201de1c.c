#include "engine.h"
#include "m2c.h"

void func_02001ad8(void);
void func_02005588(void);

void func_0201de1c(void) {
    func_02005588();
    func_02001ad8();
    *(s32 *) 0x04001000 |= 0x10000;
}
