#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        scanf("%d", &X);  // Read the start time X for each test case

        // Check if the starting time allows completing the assignments before 10 pm
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
return 0;
}