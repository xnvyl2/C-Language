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
 */


int main(){

    char s[20]; // Memory allocated on stack (fixed size)

    // Dynamic memory allocation 
    char *str = (char *)malloc(20 * sizeof(char));

    strcpy(str, "Hello world");

    puts(str);

    // After using free up the momery 
    free(str);
    
    return 0;
}