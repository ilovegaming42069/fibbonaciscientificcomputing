#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include "teslib/mylib.h"

int main (void) {
    srand(time(0));
    int a;
    const int x = 42069;
    float start_time = (float)clock()/CLOCKS_PER_SEC;
    for (int i = 0; i < x; i++){
        a = iterative(i);
    }
    float end_time  = (float)clock()/CLOCKS_PER_SEC;
    printf("Time: %f s\n",end_time - start_time);
    return 0;
}