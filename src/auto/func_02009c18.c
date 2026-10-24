/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02009c18 from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/libs/nitro/spi/calls/func_02009c18.c
 * (license: MIT), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef int BOOL;
extern void func_02009b58(u32 *words, int count);
extern BOOL func_0200a364(int sw, int led, BOOL skip, BOOL isSync);
u32 func_02009c18(u16 trigger, u16 keyIntrData) {
    u32 command[2];

    command[0] = 0x03006000;
    func_02009b58(command, 1);

    while (func_0200a364(0, 2, 0, 1) != 1) {
    }

    command[0] = (trigger & 0xff) | 0x02006200;
    command[1] = (keyIntrData & 0xffff) | 0x01010000;
    func_02009b58(command, 2);

    return 0;
}
