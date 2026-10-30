#define _POSIX_C_SOURCE 199309L
#include <time.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*sposta il processo dalla cpu alla ready list per tot ms*/
void msSleep(int millis);

/**/
void goTO(int x, int y);

void clear();