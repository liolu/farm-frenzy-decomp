#include "engine.h"
#include "m2c.h"

void func_0200635c(void);
void func_0200a698(M2C_UNK);
void func_0200a6b0(M2C_UNK);
void func_0201680c(void);
void func_02016844(void);
void func_0201694c(void);
void func_02016aec(void);
void func_02017704(void);

extern M2C_UNK data_02083740;
extern M2C_UNK data_02083750;
extern M2C_UNK data_0208375c;

void func_02016754(void) {
    if (M2C_FIELD(&data_02083740, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_02083740, s32 *, 0xC) = 1;
    func_0200635c();
    M2C_FIELD(&data_02083740, void (**)(), 0x10) = func_0201680c;
    M2C_FIELD(&data_02083740, s32 *, 0x14)       = 0;
    M2C_FIELD(&data_02083740, void (**)(), 0x1C) = func_02016844;
    M2C_FIELD(&data_02083740, s32 *, 0x20)       = 0;
    func_0200a698((s32) &data_02083750);
    func_0200a6b0((s32) &data_0208375c);
    func_0201694c();
    func_02017704();
    func_02016aec();
    M2C_FIELD(&data_02083740, s8 *, 0)  = -1;
    M2C_FIELD(&data_02083740, s32 *, 4) = 1;
}
