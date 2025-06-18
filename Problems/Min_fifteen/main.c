#include "../Common/headers.h"

/**
 * Problem: 
 * Smallest between 15 numbers (using array).
 * 
 * TC: O(n)
 */

int min(int arr[], int n){
    int i, min = INT_MAX;

    for(i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main() {
    int arr[] = {3, 2, 1, 3, 0, 4, 2, 1, 0, 3, 4, 10, 20, -1, -2};
    int n = 15;

    printf("Min : %d", min(arr, n));

    return 0;
}