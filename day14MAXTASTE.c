#include <stdio.h>

int main() {
    int T;
    // Read number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int tastiness1 = a + c;  // A + C
        int tastiness2 = a + d;  // A + D
        int tastiness3 = b + c;  // B + C
        int tastiness4 = b + d;  // B + D
        
        
        int maxTastiness = tastiness1;
        if (tastiness2 > maxTastiness) maxTastiness = tastiness2;
        if (tastiness3 > maxTastiness) maxTastiness = tastiness3;
        if (tastiness4 > maxTastiness) maxTastiness = tastiness4;
        
        
        printf("%d\n", maxTastiness);
    }
    
    return 0;
}