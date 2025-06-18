#include "../Common/headers.h"

/**
 * Problem: 
 * Sort array in descending order.
 * 
 * TC: O(nlgn) -> (Merge Sort)
 */

void printArray(int arr[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

void Merge(int arr[], int l, int mid, int h){
    int B[100]; // Auxiliary array 
    int i = l, j = mid + 1;
    int k = l;

    while(i <= mid && j <= h){
        // Ascend.
        if(arr[i] < arr[j]){
            B[k++] = arr[j++];
        }else { 
            B[k++] = arr[i++];
        }
    }

    // Get rem. elements 
    while(i <= mid){
        B[k++] = arr[i++];
    }

    while (j <= h){
        B[k++] = arr[j++];
    }
    
    // Copy back from B to Arr
    for(i = l; i <= h; i++){
        arr[i] = B[i];
    }
}

void MergeSort(int arr[], int l, int h){
    // BC: Min two elements must be there 
    if(l < h){
        // Divide 
        int mid = (l + h) / 2;
        MergeSort(arr, l , mid);
        MergeSort(arr, mid + 1, h);

        // Conquer
        Merge(arr, l, mid, h);
    }
}

int main() {
    int arr[] = {10, 1, 2, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    MergeSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}