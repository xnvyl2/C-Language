#include "../Common/headers.h"

/**
 * Problem: 
 * Addition of 10 numbers.
 * 
 * TC: O(n)
 *  
 */

int Addition(int *A, int n){
    int i, sum = 0;

    for(i = 0; i < n; i++){
        sum += A[i];
    }

    return sum;
}

int main() {
    int arr[] = {10, 1, 2, -1, 3, 20, 30, 40, 21, 35};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Addition: %d", Addition(arr, n));
    return 0;
}