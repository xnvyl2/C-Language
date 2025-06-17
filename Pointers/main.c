#include <stdio.h>
#include <stdlib.h>

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