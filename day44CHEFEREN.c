#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    while(T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); // Read N, A, B for each test case
        
        int odd_count = (N + 1) / 2; 
        int even_count = N / 2;      
        // Calculate the total duration
        int total_duration = (odd_count * B) + (even_count * A);
        
        
        printf("%d\n", total_duration);
    }
    
    return 0;
}