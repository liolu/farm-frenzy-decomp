/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_0200550c(void);
extern void func_02005520(int state);
extern void func_02005d38(void *dst, int value, int size);
extern void func_020045b4(void *queue);
extern void func_020044a4(void);
extern char data_020820a8;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_0200c4b4(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_02005d38(&job, 0, 0x24);
        enabled = func_0200550c();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020045b4(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_02005520(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_0200550c();
        done                              = job.done;
        *((char *) &data_020820a8 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_020820a8 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_02005520(enabled);
        } else {
            func_020044a4();
            return;
        }
    }
}
