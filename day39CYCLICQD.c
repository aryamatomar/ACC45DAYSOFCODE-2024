#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D);

        // Check if the quadrilateral is cyclic
        // Either A + C = 180 and B + D = 180
        // or A + B = 180 and C + D = 180
        if (A + C == 180 || B + D == 180) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}