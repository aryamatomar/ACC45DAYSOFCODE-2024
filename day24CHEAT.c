#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of spooky days
        scanf("%d", &N);
        
        // Calculate the number of Tuesdays
        int num_of_tuesdays = (N >= 2) ? 1 + (N - 2) / 7 : 0;
        
        // Output the result
        printf("%d\n", num_of_tuesdays);
    }
    
    return 0;
}