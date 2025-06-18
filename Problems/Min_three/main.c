#include "../Common/headers.h"

/**
 * Problem: 
 * Smallest number between 3 numbers.
 * 
 * TC: O(1) -> 3 is constant
 */

int min(int count, ...){
    va_list args;

    va_start(args, count);

    int min = INT_MAX, i;

    for(i = 0; i < count; i++){
        int x = va_arg(args, int);
        if(x < min){
            min = x;
        }
    }

    va_end(args);
    return min;
}


int main() {

    printf("Min : %d", min(4, 2, 30, 0, 1));

    return 0;
}
