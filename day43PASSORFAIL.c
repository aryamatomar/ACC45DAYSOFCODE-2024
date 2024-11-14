#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N, X, P;
        scanf("%d %d %d", &N, &X, &P);

        
        int totalMarks = 3 * X - (N - X);

        
        if (totalMarks >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}