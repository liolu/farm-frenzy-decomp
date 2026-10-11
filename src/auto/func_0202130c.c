/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02021098(void);

extern M2C_UNK data_0209593c;
extern M2C_UNK data_02095b40;

void func_0202130c(void) {
    M2C_FIELD(&data_02095b40, s16 *, 0xA) = (s16) M2C_FIELD(&data_0209593c, s16 *, 0xE);
    M2C_FIELD(&data_02095b40, s16 *, 8) = (s16) M2C_FIELD(&data_0209593c, s16 *, 0xC);
    func_02021098();
}
