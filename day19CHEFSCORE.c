#include <stdio.h>
int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int max_marks = N * X; // Maximum possible marks

        // Check if Y is achievable
        if (Y <= max_marks && Y % X == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}