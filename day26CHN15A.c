#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N, K; 
        scanf("%d %d", &N, &K);
        
        int wolverine_count = 0; 
        
        for (int i = 0; i < N; i++) {
            int characteristic;
            scanf("%d", &characteristic);
            
            
            int new_value = characteristic + K;
            
            
            if (new_value % 7 == 0) {
                wolverine_count++;
            }
        }
        
        
        printf("%d\n", wolverine_count);
    }

    return 0;
}
