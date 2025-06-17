#include "../Common/headers.h"

// Problem: There are multiple params that we have to write.
// To Resolve this problem variadic function came into existence.
int sum1(int a, int b, int c, int d){
    return a + b + c + d;
}

/**
 * Varidic Function: 
 * It is a function in which multiple paramaters are passed as one argument.
 * Eg. printf(), scanf() etc. 
 * Header file: 
 *      <stdarg.h>
 * This Provide: 
 *      va_list: to declare variable argument list
 *      va_start: to initialize the list
 *      va_arg: to access each argument
 *      va_end: to clean up
 * 
 * Syntax: 
 *      return_type function_name(int fixed_args, ...){
 *          var_list args; // In which all params will be stored
 *          var_start(args, count); // Used to init args 
 *          *Access arguments using va_arg()
 *          va_end(args); // Clean up
 *  
 *      }
 */

int sum2(int count, ...){
    va_list args;
    va_start(args, count);

    int i, x, sum = 0;
    for(i = 0; i < count; i++){
        x = va_arg(args, int);
        sum += x;
    }
    va_end(args); // clean up
    return sum;
}

int max(int count, ...){
    va_list args;
    va_start(args, count);

    int i, max = INT_MIN;

    for(i = 0; i < count; i++){
        int num = va_arg(args, int);
        if(max < num){
            max = num;
        }
    }
    
    va_end(args);

    return max;
}


int main() {

    printf("Sum is: %d.", sum2(4, 1, 2, 3, 4));
    printf("\nMax no: %d.", max(4, 1, 10, 20, 0));
    return 0;
}

