#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0207f800[]; /* SDK_AUTOLOAD_LIST */
extern char data_0207f818[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_0207f480[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0207f800,
    (void *) data_0207f818,
    (void *) data_0207f480,
    (void *) data_0207f480,
    (void *) 0x020978c0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04027539, /* SDK version 4.2.30009 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
