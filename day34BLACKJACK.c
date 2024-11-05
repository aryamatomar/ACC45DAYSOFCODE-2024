#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        
        // Calculate the third number needed to make the sum 21
        int C = 21 - (A + B);
        
        // Check if C is a valid number between 1 and 10
        if (C >= 1 && C <= 10) {
            printf("%d\n", C); // Print the third number if valid
        } else {
            printf("-1\n"); // Print -1 if it's not possible to win
        }
    }

    return 0;
}