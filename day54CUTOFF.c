#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // Number of students and number of students who pass

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]); // Input marks
        }

        // Sort the array in descending order
        qsort(A, N, sizeof(int), compare);

        // Find the maximum passing mark
int passingMark = A[X - 1] - 1; // The X-th highest mark minus 1
printf("%d\n", passingMark);
    }

    return 0;
}
