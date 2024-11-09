#include <stdio.h>
#include <math.h>

// Function to calculate the total time the tournament will take
int calculate_total_time(int N, int A, int B) {
    // Calculate the number of rounds using log2
    int R = (int)log2(N);
    // Calculate total time
    return (R * A) + ((R - 1) * B);
}

int main() {
    int T;
    // Read the number of test cases
    scanf("%d", &T);
    while (T--) {
        int N, A, B;
        // Read N, A, B for each test case
        scanf("%d %d %d", &N, &A, &B);
        // Calculate and print the total time for the current test case
        printf("%d\n", calculate_total_time(N, A, B));
    }
    return 0;
}