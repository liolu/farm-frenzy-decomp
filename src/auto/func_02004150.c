#include "m2c.h"

extern M2C_UNK data_0207f590;

void func_02004150(u8 *param_1) {
    u8 *prev = NULL;
    u8 *cur  = *(u8 **) ((u8 *) &data_0207f590 + 0x2C);

    while (cur != NULL && cur != param_1) {
        prev = cur;
        cur  = *(u8 **) (cur + 0x68);
    }
    if (prev == NULL) {
        *(u8 **) ((u8 *) &data_0207f590 + 0x2C) = *(u8 **) (param_1 + 0x68);
        return;
    }
    *(u8 **) (prev + 0x68) = *(u8 **) (param_1 + 0x68);
}
