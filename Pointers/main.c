#include <stdio.h>
#include <stdlib.h>

/**
 * Pointers: 
 * It is a variable which contains the address of another variable. 
 * It is used to point files, printer and other h/w devices.
 * It is used in call by reference.
 * Syntax:
 *      data_type *ptr_name = &var_name;
 * Types: 
 * 1.NULL ptr
 * 2.Wild ptr
 * 3.Void ptr (generic pointer)
 * 4.Dangling ptr
 */

int main()
{
    int x = 4;

    printf("%d\n", x);

    int *p = &x;

    printf("%d\n", *p);

    // Types of pointer:
    // Null pointer
    int *ptr1 = NULL;

    // Wild pointer
    int *ptr2; // It will lead segmentation fault / data corruption
    *ptr2 = 2;

    printf("%d", *ptr2);

    // Void pointer
    void *ptr3;

    // Dangling pointer
    int *ptr4 = (int *)malloc(sizeof(int));

    // After below free call, ptr4 becomes a dangling pointer
    free(ptr4);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr4 = NULL;


    return 0;
}