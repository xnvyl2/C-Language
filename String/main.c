#include <stdio.h>
#include <string.h>

/**
 * String:
 * Collection of chars.
 */

int main()
{
    // Declaration
    char s1[] = "Hello";
    char s2[] = "World";

    printf("%s", s1);
    printf("\n%s", s2);

    printf("\nLen of the string: %d.", strlen(s1));
    printf("\n Concatenated string: %s\n", strcat(s1, s2));

    // Input :
    char str[20];

    // Single word input
    scanf("%s", str);
    printf("%s", str);

    // Get complete string with spaces
    gets(str);
    puts(str);

    return 0;
}