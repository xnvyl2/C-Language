#include "../Common/headers.h"
/**
 * Functions: 
 * It is a block of code which is used to accomplish certain task in which some parameters are passed. It will only excecuted when it is called.
 * 
 * Syntax: 
 * return_type function_name(data_type var_name){
 *      Function body (statements) 
 *      return value; // (if return_type is not void)
 * }
 * 
 * Types: 
 * 1. User defined functions.
 * 2. Built-in functions.
 *
 * Procedure of Function:
 *  1. Prototyping (Declaration)
 *  2. Calling (In main())
 *  3. Definition (After main())
 *  
 * Call by value: Copy of the variable is passed.
 * Call by refernce: Address of the variable is passed. 
 * 
 * Recursion: It is function calling itself until the specified condt. met. 
 */

// Porototype (function declaration)
int add(int a, int b);
void swap1(int a, int b);
void swap2(int *a, int *b);
// Display no from 1 to n
void print(int n);

int main() {
    int a = 10, b = 20;

    // Calling 
    int ans = add(a, b);
    printf("Addition: %d\n", ans);

    // Call by value 
    puts("\nCall By Value:");
    printf("Before swapping a, b: %d, %d\n", a, b);
    swap1(a, b);

    // Call by reference 
    puts("\nCall by Reference: ");
    printf("Before swapping a, b: %d, %d\n", a, b);
    swap2(&a, &b);    
    printf("After swapping a, b: %d, %d\n", a, b);

    // Recursion 
    int n = 10;
    puts("\nDisplay Nos from 1 to n: ");
    print(n);

    return 0;
}

// Definition 
int add(int a, int b){
    return a + b;
}

void swap1(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping a, b: %d, %d\n", a, b);
}

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int n){
    // Base condition 
    if(n <= 0){
        return;
    }
    print(n-1);
    printf("%d ",n);
}