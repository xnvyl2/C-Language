#include "../Common/headers.h"

/**
 * Problem: 
 * Fibonacci Number.
 *  
 * TC: O(n)
 *  
 */

void Fibonacci(int n){
    int num1 = 1, num2 = 1;
    int count = 2;
    int next;

    printf("%d %d ", num1, num2);
    while(count < n){
        // Calc Next num
        next = num1 + num2;
        printf("%d ", next);

        // Slide num1 and num2
        num1 = num2;
        num2 = next;
        count++;
    }
}

int main() {
    int n;
    printf("Enter the no to generate Fib no: ");
    scanf("%d", &n);

    Fibonacci(n);
    
    return 0;
}