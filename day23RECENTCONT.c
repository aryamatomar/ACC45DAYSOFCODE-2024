#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of problems
        scanf("%d", &N);
        
        int start38_count = 0;
        int ltime108_count = 0;
        char contest_code[10]; // To store the contest code
        
        for (int i = 0; i < N; i++) {
            scanf("%s", contest_code);
            if (strcmp(contest_code, "START38") == 0) {
                start38_count++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                ltime108_count++;
            }
        }
        
        // Output the counts for START38 and LTIME108
        printf("%d %d\n", start38_count, ltime108_count);
    }
    return 0;
}