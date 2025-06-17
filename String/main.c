#include <stdio.h>
#include <string.h>

/**
 * String:
 * It is collection of chars which is terminated by null char. ('\0');
 * It is mutable if stored in stack or heap (via array or malloc).asm
 * char str[] = "hello";
 * str[0] = 'H';  // ✅ works
 * 
 * It is immutable if it's a string literal stored in read-only memory.
 * char *str = "hello";
 * str[0] = 'H';  // ❌ runtime error
 *
 * Methods:
 * 1. int strlen(str) -> returns the length of the string
 * 2. char *strcat(*dest, *src) -> append src in the dest and return char pointer
 * 3. char *strcpy(char *dest, const char *src) -> Copies each character from src to dest including \0
 * 4. int strcmp(const char *str1, const char *str2); -> Compare two string
 */

int main()
{
    // Declaration with Intilization
    // char s1[] = "Hello";
    // char s2[] = "World";

    // printf("%s", s1);
    // printf("\n%s", s2);

    // // Input :
    // char str[20];

    // // Single word input
    // scanf("%s", str);
    // printf("%s", str);

    // // Get complete string with spaces
    // gets(str);
    // puts(str);

    // String methods:
    char dest[] = "Hello";
    char src[] = "World";
    // 1. strlen:
    printf("\nLen of the dest and src] : %d & %d.\n", strlen(dest), strlen(src));

    // 2. strcat
    // dest = dest + src
    strcat(dest, src);
    puts(dest); // HelloWorld
    puts(src);  // World

    // 3. strcpy
    char d1[20];
    strcpy(d1, src);
    puts(d1);

    // 4. strcmp -> Returns 0 if both strings are equal
    char s3[] = "Hello";
    char s4[] = "Hello";
    if(!strcmp(s3, s4)){
        puts("Equal");
    }else {
        puts("Not equal");
    }

    // Pointers with string 
    // It will store the starting address 
    char *ptr = s3;

    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}