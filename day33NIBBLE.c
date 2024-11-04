#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N; // Number of bits
        scanf("%d", &N); // Read the number of bits

        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            printf("Good\n");
        } else {
            printf("Not Good\n");
        }
    }

    return 0;
}
