#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        long long N;
        scanf("%lld", &N); // Read the number of gifts

        // Calculate the minimum coins required
        long long sets = N / 5;
        long long paid_gifts = N - sets;

        printf("%lld\n", paid_gifts); // Output the result for each test case
    }

    return 0;
}