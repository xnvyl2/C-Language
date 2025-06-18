#include "../Common/headers.h"

/**
 * Problem: 
 * Insertion Sort
 * 
 * TC: 
 *  Best case = O(n) -> When array is sorted
 *  Worst case = O(n^2) 
 */


void printArray(int *arr, int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

void InsertionSort(int *A, int n){
    int i, j, x;

    for(i = 1; i < n; i++){
        x = A[i];
        j = i - 1;

        while(j > -1 && x < A[j]){
            // Shift element 
            A[j + 1] = A[j];
            j--;
        }

        // Place key 
        A[j + 1] = x;
    }
}

int main() {
    int arr[] = {10, 1, 2, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    InsertionSort(arr, n);
    printArray(arr, n);


    return 0;
}