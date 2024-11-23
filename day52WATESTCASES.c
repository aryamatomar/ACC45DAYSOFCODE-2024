#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Number of test cases for this problem

        int S[N]; // Array to store sizes of test cases
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]);
        }

        char V[N + 1]; // Binary string
        scanf("%s", V);

        int min_size = 101; // Initialize to maximum possible size + 1
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') { // Check for failing test case
                if (S[i] < min_size) {
                    min_size = S[i];
                }
            }
        }

        printf("%d\n", min_size); // Output the smallest failing test case size
    }

    return 0;
}
