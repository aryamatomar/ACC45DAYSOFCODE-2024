#include <stdio.h>
#include <stdlib.h>

// Function to find the minimum number of operations
int minOperations(int *A, int N) {
    int max_value = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
        }
    }
    
    // Create frequency array based on the maximum element
    int *freq = (int *)calloc(max_value + 1, sizeof(int));
    for (int i = 0; i < N; i++) {
        freq[A[i]]++;
    }
    
    // Find the maximum frequency
    int max_freq = 0;
    for (int i = 0; i <= max_value; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }
    
    free(freq);
    return N - max_freq;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int *A = (int *)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        printf("%d\n", minOperations(A, N));
        free(A);
    }
    
    return 0;
}