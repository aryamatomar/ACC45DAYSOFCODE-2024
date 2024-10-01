#include <stdio.h>

int main() {
    int A, B, C, X;

    
    scanf("%d %d %d %d", &A, &B, &C, &X);

    
    if (X == A || X == B || X == C) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
