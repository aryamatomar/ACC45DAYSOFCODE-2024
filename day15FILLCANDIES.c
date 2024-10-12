#include <stdio.h>


int min_bags_needed(int N, int K, int M) {
    int capacity = K * M;
    
    return (N + capacity - 1) / capacity;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M); 
        int result = min_bags_needed(N, K, M);
        printf("%d\n", result); 
    }

    return 0;
}