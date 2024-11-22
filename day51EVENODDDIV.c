#include <stdio.h>
#include <math.h>

// Function to count even and odd divisors
void countDivisors(int N, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            // i is a divisor
            if (i % 2 == 0) {
                (*even)++;
            } else {
                (*odd)++;
            }
            // Check if N / i is a different divisor
            if (i != N / i) {
                if ((N / i) % 2 == 0) {
                    (*even)++;
                } else {
                    (*odd)++;
                }
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read N for the test case

        int evenCount, oddCount;
        countDivisors(N, &evenCount, &oddCount);

        // Compare even and odd divisor counts
        if (evenCount > oddCount) {
            printf("1\n");
        } else if (evenCount == oddCount) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
