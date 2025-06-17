#include "../Common/headers.h"

/**
 * Type Casting: 
 * 1. Implicit: Automatically done by compiler
 * 2. Explicit: You force the conversion using a type in parentheses.
 */

int main() {
    // 1. Implicit Type Casting:
    int x = 10;
    float y = x;  // int → float automatically
    printf("Float: %f\n",  y);

    // 2. Explicit Type Casting:
    int a = 10, b = 20;
    float ans =  (float)a/b;

    printf("Ans: %f\n", ans);
    
    return 0;
}