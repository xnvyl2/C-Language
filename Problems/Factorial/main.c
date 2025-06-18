#include "../Common/headers.h"
/**
 * Problem: 
 * Factorial number.
 *  
 * TC: O(n)
 *  
 */

long long  int Factorial(int n){
    // Base case 
    if(n <= 2){
        return n;
    }

    long long int fact = 1, i;
    for(i = 2; i <= n; i++){
        fact *= i;
    }

    return fact;
}

int main() {
    int n;
    printf("Enter the no to generate fact: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Factorial is not defined for -ve numbers.");
    }

    if(n > 20){
        printf("Results might be inaccurate. (Overflow)");
    }else{
        printf("Factorial No: %lld", Factorial(n));
    }
    return 0;
}