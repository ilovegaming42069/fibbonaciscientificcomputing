#include <stdio.h>

// iterative
int iterative(int x){
    int f1 = 0;
    int f2 = 1;
    int output;
    if(x == 0){
        return f1;
    }else if(x == 1){
        return f2;
    }else{
        for(int i = 2; i <= x; i++){
            output = f1+f2;
            f1 = f2;
            f2 = output;
        }
        return output;
    }
}

// recursive
int recursive(int x){
    if(x == 0){
        return 0;
    } else if(x == 1){
        return 1;
    } else{
        return recursive(x-1)+recursive(x-2); 
    }
}
