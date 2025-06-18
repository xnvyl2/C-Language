#include "../Common/headers.h"

/**
 * Problem: 
 * Binary Search
 * 
 * Req: Array must be sorted.
 * 
 * TC: O(nlgn)
 */

void printArray(int *arr, int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

void BinarySearch(int *A, int low, int high, int key){
    while(low <= high){
        int mid = (low + high) / 2;

        if(A[mid] == key){
            printf("%d element is found at %d index.\n", key, mid);
            return;
        }
        else if(key < A[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    printf("%d element is not present.\n", key);
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    int n = sizeof(A) / sizeof(A[0]);

    // Successful search 
    BinarySearch(A, 0, n-1, 10);

    // Unsuccessful search 
    BinarySearch(A, 0, n-1, 60);

    return 0;
}