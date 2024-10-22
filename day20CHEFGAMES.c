#include <stdio.h>

int main() {
    int T;
    
    scanf("%d", &T);
    
    while (T--) {
        int R1, R2, R3, R4;
    
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);
        
        
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }
    
    return 0;
}