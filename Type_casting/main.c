#include "../Common/headers.h"

/**
 * Type Casting: 
 * 1. Implicit: Automatically done by compiler
 * 2. Explicit: You force the conversion using a type in parentheses.
 * # String To int Conversion: 
 * Methods:
 *      1. atoi() -> ASCII to Integer
 *      Header file: #include <stdlib.h>
 *      Syntax: 
 *          int atoi(const char *str);
 *      Not safe: If str = "abc", it returns 0, without any warning!
 * 
 *      2. strtol() -> String to Long
 *      Header file: #include <stdlib.h>
 *      Syntax: 
 *          long strtol(const char *str, char **endptr, int base);
 *      Parameters:
 *          str: input string
 *          endptr: ptr to char where parsing stops
 *          base: numeric base (usually 10)
 *      Safe: You can detect invalid characters using *end.
 * 
 * # Integer to string conversion:
 *      1. sprintf() -> String Printf Function
 *      Header file: #include <stdio.h>
 *      Syntax:
 *          int sprintf(char *str, const char *format, ...);
 *      Parameters:
 *          char *str: Target string (buffer) to store output
 *          const char *format: Format string (like printf)
 *          ... : Values to be formatted and written
 *      Returns no of chars.
 *      Safe & Standard. Works like printf, but stores in string (excluding null char).
 *  
 *      2. itoa() -> Integer To ASCII
 *      Header file: #include <stdlib.h>
 *      Syntax:
 *          char *itoa(int value, char *str, int base);
 *      Parameters:
 *          vlaue: Input number
 *          *str : string pointer
 *          base : numeric base (usually 10)
 *      Returns char pointer.
 *      Not portable — use only if your compiler supports it.
 * 
 * # Convert char to int vice versa without errors
 *    
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
    

    // String to int conversion.

    // 1. atoi(str): (unsafe)
    char str[] = "123";
    int num1 = atoi(str);

    printf("Number1: %d\n", num1);

    char invalid[] = "abc";
    int num2 = atoi(invalid);
    printf("(Invalid) Number2: %d\n", num2);
    
    // 2. strtol(str, &end, base): (safe)
    char in_str[] = "123xyz";
    char *end; // To detect invalid characters
    long num3 = strtol(in_str, &end, 10);

    // Detect errors
    if(*end == '\0'){
        printf("Number3: %ld\n", num1);
    }else{
        printf("Invalid part of string: %s\n", end);
    }


    // Int to string conversion

    // 1. sprintf(*str, foramt, ...):

    char op_string[20];
    sprintf(op_string, "%d", 12345);
    puts(op_string);

    // 2. itoa(ip_vl, *str, base):
    char op_str[20];
    itoa(1234, op_str, 10);
    puts(op_str);

    // Convert char to int 
    char ch = 'x';
    int c = ch; // Implicitly convert 
    printf("Integer: %d\n", c);

    // Convert int to char 
    // int z = 1000; // Data loss bcoz of char range (-127 to 127)
    int z = 66; // B
    ch = z;

    printf("Character: %c\n", ch);

    return 0;
}