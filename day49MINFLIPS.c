#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N); // Length of the array
        
        int A[N];
        int sum = 0, countPositive = 0, countNegative = 0;

        // Read array and calculate initial sum and counts
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            if (A[i] == 1) countPositive++;
            else countNegative++;
        }

        // If N is odd, it is impossible to make the sum 0
        if (N % 2 != 0) {
            printf("-1\n");
            continue;
        }
        
        // Calculate the sum
        sum = countPositive - countNegative;

        // Target difference we need to balance
        int target = abs(sum) / 2;

        // Minimum flips needed is the target difference
        printf("%d\n", target);
    }

    return 0;
}