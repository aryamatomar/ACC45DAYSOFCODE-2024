#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int degree = -1; // Initialize degree to -1
        int coefficient;

        
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficient);
            if (coefficient != 0) {
                degree = i; 
            }
        }

        // Output the determined degree
        printf("%d\n", degree);
    }

    return 0;
}