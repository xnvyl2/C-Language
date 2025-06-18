#include "../Common/headers.h"

/**
 * Problem: 
 * Creating right angled triangle pattern using "*"
 * 
 * TC: O(n^2)
 */

int main() {
    int N; 
    printf("Enter the no : ");
    scanf("%d", &N);

    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}