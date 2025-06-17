#include <stdio.h>

/**
 * Global Variables: 
 * Global variables are variables declared outside all functions (usually at the top of a program). 
 * They can be accessed and modified from any function in the program.
 */

int globalVar = 10; // Global variable (declared outside main())

void modifyGlobal() {
    globalVar = 20; // Can be modified anywhere
}

int main() {
    printf("Before: %d\n", globalVar); // Output: 10
    modifyGlobal();
    printf("After: %d\n", globalVar); // Output: 20
    return 0;
}