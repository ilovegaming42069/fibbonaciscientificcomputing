#include <stdio.h>
#include "teslib/mylib.h"

int main(void){
    int x = 11;
    printf("The fibbonaci number for %d is %d\n", x, iterative(x));
    printf("The fibbonaci number for %d is %d\n", x, recursive(x));
    for(int i = 0; i <= x; i++){
        if(iterative(i) != recursive(i)){
            printf("ERROR at %i\n",i);
        }else{
            printf("The fibonacci number F%d = %d = %d\n", i, iterative(i), recursive(i));
        }
    }
    return 0;
}