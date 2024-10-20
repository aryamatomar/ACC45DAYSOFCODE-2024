#include <stdio.h>


int calculate_total_time(int N, int A, int B) {
    
    int R = 0;
    while (N > 1) {
        N /= 2;
        R++;
    }
    
    return (R * A) + ((R - 1) * B);
}

int main() {
    int T;
    
    scanf("%d", &T);
    while (T--) {
        int N, A, B;
        
        scanf("%d %d %d", &N, &A, &B);
        
        printf("%d\n", calculate_total_time(N, A, B));
    }
    return 0;
}