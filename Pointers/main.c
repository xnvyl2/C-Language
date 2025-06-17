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
 * 
 * Multilvl Pointer:
 * A multilevel pointer is a pointer that stores the address of another pointer.
 * 
 * Examples:
 * int *p → pointer to an integer
 * int **q → pointer to a pointer to an integer
 * int ***r → pointer to a pointer to a pointer to an integer
 * 
 * Used to create 2d/3d arrays, in advanced ds, to pass pointer by reference to func. 
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

    // Multilvl pointer
    int y = 10;
    int *p = &y;      // pointer to int
    int **q = &p;     // pointer to pointer to int
    int ***r = &q;    // pointer to pointer to pointer to int

    // Let's print everything
    printf("y      = %d\n", y);       // 10
    printf("*p     = %d\n", *p);      // 10
    printf("**q    = %d\n", **q);     // 10
    printf("***r   = %d\n", ***r);    // 10


    return 0;
}