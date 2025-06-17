#include "../Common/headers.h"
/**
 * Malloc: 
 * It is a function which is used to allocate dynamic memory at runtime from heap.
 * It is present in <stdlib.h>
 * Syntax: 
 *      void *malloc(size_t size);
 * Parameters:
 *  size: Number of bytes to allocate
 *  return_type : Void pointer (generic pointer) Which can be typecasted to other types
 * Memory Deallocation:
 *  void *free(void *ptr)
 * Parameters:
 *  ptr is the pointer to the memory block that needs to be freed or deallocated.
 *  return_type : Void pointer (generic pointer) Which can be typecasted to other 
 */


int main(){

    // Malloc based string
    char s[20]; // Memory allocated on stack (fixed size)

    // Dynamic memory allocation 
    char *str = (char *)malloc(20 * sizeof(char));

    strcpy(str, "Hello world");

    puts(str);

    // After using free up the momery 
    free(str);

    // Malloc based array 
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));


    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}