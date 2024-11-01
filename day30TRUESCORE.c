#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int A, B, C, D;
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D); 

        // Check if it's possible to reach the target scores
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }

    return 0;
}
