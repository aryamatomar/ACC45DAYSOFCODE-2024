#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int P, Q; // Scores of Alice and Bob
        scanf("%d %d", &P, &Q);

        int totalPoints = P + Q; // Total number of points/serves so far
        int turn = totalPoints / 2; // Determine the number of complete turns

        // Each turn consists of 2 serves by the same player
        // If turn is even, it's Alice's serve; if odd, it's Bob's serve
        if (turn % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}