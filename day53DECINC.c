#include <stdio.h>

int main() {
    int N;

    // Input: Read the number N
    scanf("%d", &N);

    // Check if N is divisible by 4
    if (N % 4 == 0) {
        N += 1; // Increment if divisible by 4
    } else {
        N -= 1; // Decrement otherwise
    }

    // Output the new value of N
    printf("%d\n", N);

    return 0;
}
