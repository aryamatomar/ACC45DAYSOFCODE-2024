#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of players Chef is considering
        scanf("%d", &N);
        
        // Calculate the number of choices for captain and vice-captain
        int choices = N * (N - 1);
        
        // Print the result for this test case
        printf("%d\n", choices);
    }
    
    return 0;
}
